import random


def main():
    ...


def get_level():
    while True:
        try:
            level = int(input("Level: "))
            if level != 1 and level != 2 and level != 3:
                continue
            else:
                return level
        except ValueError:
            pass



def generate_integer(level):
    ...


if __name__ == "__main__":
    main()