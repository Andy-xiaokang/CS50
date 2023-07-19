import sys
import requests

def main:
    number = get_coins()



def get_coins():
    try:
        number = float(sys.argv[1])
        return number
    except ValueError:
        sys.exit("Command-line argument is not a number")