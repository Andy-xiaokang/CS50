import sys
import requests
import json

def main():
    number = get_coins()
    try:
        response = requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")
        # print(json.dumps(response.json(), indent = 2))
    except requests.RequestException:
        sys.exit("Request failed")

def get_coins():
    if len(sys.argv) == 1:
        sys.exit("Missing command-line argument")
    try:
        number = float(sys.argv[1])
        return number
    except ValueError:
        sys.exit("Command-line argument is not a number")

if __name__ == "__main__":
    main()