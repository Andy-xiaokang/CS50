from fuel import convert, gauge
import pytest


def test_zero():
    with pytest.raises(ZeroDivisionError):
        convert("4/0")

def test_xgreaterthany():
    with pytest.raises(ValueError):
        convert("2/1")

def test_invalidinput():
    with pytest.raises(ValueError):
        convert("cat/dog")
    with pytest.raises(ValueError):
        convert("1.5/4.5")

def test_convert():
    assert convert("1/2") == 50
    assert convert("1/4") == 25



def test_empty():
    assert gauge(0) == "E"
    assert gauge(1) == "E"

def test_full():
    assert gauge(99) == "F"
    assert gauge(100) == "F"

def test_normal():
    assert gauge(25) == "25%"