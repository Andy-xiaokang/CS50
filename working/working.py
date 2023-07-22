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
        if not 1 <= amh <= 12 or not 1 <= pmh <= 12:
            raise ValueError
        if not 0 <= amm <= 59 or not 0 <= pmm <= 59:
            raise ValueError
        pmh = pmh + 12
        return f"{amh:02}:{amm:02} to {pmh:02}:{pmm:02}"

    matchs = re.search(r"(\d?\d):?(\d\d)? PM to (\d?\d):?(\d\d)? AM", s)
    if matchs:
        pmh, pmm, amh, amm = matchs.group(1), matchs.group(2), matchs.group(3), matchs.group(4)
        if amm == None:
            amm = '0'
        if pmm == None:
            pmm = '0'
        amh, amm, pmh, pmm = int(amh), int(amm), int(pmh), int(pmm)
        if not 1 <= amh <= 12 or not 1 <= pmh <= 12:
            raise ValueError
        if not 0 <= amm <= 59 or not 0 <= pmm <= 59:
            raise ValueError
        pmh = pmh + 12
        return f"{pmh:02}:{pmm:02} to {amh:02}:{amm:02}"

    else:
        raise ValueError




if __name__ == "__main__":
    main()