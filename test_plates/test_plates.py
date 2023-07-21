from plates import is_valid

def test_len():
    assert is_valid("CS50") == True
    assert is_valid("good afternoon") == False
    assert is_valid("s") == False

def test_letter():
    assert is_valid("cs50") == True
    assert is_valid("5S") == False
    assert is_valid("s") == False

def test_number():
    assert is_valid("cs50") == True
    assert is_valid("cs05") == False
    assert is_valid("AAA222") == True
    assert is_valid("AA22A") == False

def test_alphanum():
    assert is_valid("PI3.14") == False
    assert is_valid("hello!") == False
    assert is_valid("I love") == False
