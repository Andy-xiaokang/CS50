import re
import sys


def main():

    print(convert(input("Hours: ")))


def convert(s):
    matchs = re.search(r"(\d?\d):?(\d\d)? AM to (\d?\d):?(\d\d)? PM", s)
    if matchs:
        amh, amm, pmh, pmm = 




if __name__ == "__main__":
    main()