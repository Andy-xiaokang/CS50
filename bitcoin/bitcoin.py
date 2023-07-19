import sys
import requests
import json

def main():
    number = get_coins()
    response = request.get()


def get_coins():
    if len(sys.argv) == 1:
        sys.exit("Missing command-line argument")
    try:
        number = float(sys.argv[1])
        return number
    except ValueError:
        sys.exit("Command-line argument is not a number")