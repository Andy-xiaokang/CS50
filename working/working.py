import re
import sys


def main():

    print(convert(input("Hours: ")))


def convert(s):
    matchs = re.search(r"(\d?\d):?(\d\d)? (AM|PM) to (\d?\d):?(\d\d)? (PM|AM)", s)
    if matchs:
        if matchs.group(3) == 'AM' and matchs.group(6) == 'PM':
            amh, amm, pmh, pmm = matchs.group(1), matchs.group(2), matchs.group(4), matchs.group(5)
        elif matchs.group(3) == "PM" amd matchs.group(6) == "AM":
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
        if amh == 12:
            amh = 0
        if pmh == 12:
            pmh = 0
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
        if amh == 12:
            amh = 0
        if pmh == 12:
            pmh = 0
        pmh = pmh + 12
        return f"{pmh:02}:{pmm:02} to {amh:02}:{amm:02}"

    else:
        raise ValueError




if __name__ == "__main__":
    main()