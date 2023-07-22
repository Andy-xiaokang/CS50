import re
import sys


def main():
    print(parse(input("HTML: ")))


def parse(s):
    matchs = re.search(r"youtube\.com/embed/(.+)", s)
    if matchs:
        return matchs.group(1)


...


if __name__ == "__main__":
    main()