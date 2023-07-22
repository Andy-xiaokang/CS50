from numb3rs import validate

def test_bound():
    assert validate("0.0.0.0") == True
    assert validate("255.255.255.255") == True

def test_normal():
    assert validate("127.0.0.0") == True
    assert validate("1.2.3.4") == True

def test_stepbound():
    assert validate("256.") == False
    assert validate("512.512.512.512") == False
    assert validate("1.2.3.1000") == False
def test_firstbyte():
    assert validate("2001:0db8:85a3:0000:0000:8a2e:0370:7334") == False

def test_invalidinput():
    assert validate("10.10.10.10.10") == False
    assert validate("cat") == False