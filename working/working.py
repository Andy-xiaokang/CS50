import re
import sys


def main():

    print(convert(input("Hours: ")))


def convert(s):
    matchs = re.search(r"(\d?\d):?(\d\d)? AM to (\d?\d):?(\d\d)? PM", s)
    if matchs:
        amh, amm, pmh, pmm = matchs.group(1), matchs.group(2), matchs.group(3), matchs.group(4)
        if amm == None:
            amm = '0'
        if pmm == None:
            pmm = '0'
        amh, amm, pmh, pmm = int(amh), int(amm), int(pmh), int(pmm)
        if not 1 <= amh <= 12 or not 1 <= pmh <= 12

    else:
        raise ValueError




if __name__ == "__main__":
    main()