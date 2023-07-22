import re
import sys


def main():
    print(validate(input("IPv4 Address: ")))


def validate(ip):
    matchs = re.search(r"(\d+)\.(\d+)\.(\d+)\.(\d+)", ip)
    if matchs:
        



if __name__ == "__main__":
    main()