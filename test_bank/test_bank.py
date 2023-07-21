from bank import value

def test_0():
    assert value("hello, world") == 0

def test_case():
    assert value("HELLO, WORLD") == 0

def test_20():
    assert value('hey') == 20

def test_100():
    assert value("good morning") == 100
