from twttr import shorten

def test_word():
    assert shorten("Twitter") == "Twttr"

def test_upper():
    assert shorten("TWITTER") == 'TWTTR'

def test_sentence():
    assert shorten("What's your name?") == "Wht's yr nm?"

def test_number():
    assert shorten("CS50") == "CS50"

