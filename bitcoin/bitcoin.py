import sys
import requests
import json

def main():
    number = get_coins()
    response = requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")
    print(response)


def get_coins():
    if len(sys.argv) == 1:
        sys.exit("Missing command-line argument")
    try:
        number = float(sys.argv[1])
        return number
    except ValueError:
        sys.exit("Command-line argument is not a number")