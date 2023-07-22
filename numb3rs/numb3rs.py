import re
import sys


def main():
    print(validate(input("IPv4 Address: ")))


def validate(ip):
    matchs = re.search(r"^(\d+)\.(\d+)\.(\d+)\.(\d+)$", ip)
    if matchs:
        ip0, ip1, ip2, ip3 = int(matchs.group(1)), int(matchs.group(2)), int(matchs.group(3)), int(matchs.group(4))
        if 0 <= ip0 <= 255 and 0 <= ip1 <= 255 and 0 <= ip2 <= 255 and 0 <= ip3 <= 255:
            return True
        else:
            return False

    else:
        return False



if __name__ == "__main__":
    main()