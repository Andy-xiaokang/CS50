from um import count
import pytest

def test_case():
    assert count("um") == 1
    assert count("UM") == 1
def test_word():
    assert count("um... ") == 1
    assert count("hello um world") == 1
    assert count("this is um cs50") == 1
    assert count("Um? Mum? Is this that album where, um, umm, the clumsy alums play drums?") == 2
