import random


def main():
    


def get_level():
    while True:
        try:
            level = int(input("Level: "))
            if level = 1 or level = 2 or level != 3:
                return level
            else:
                continue
        except ValueError:
            pass



def generate_integer(level):
    if level == 1:
        return random.randint(0, 9)
    elif level == 2:
        return random.randint(0, 99)
    elif level == 3:
        return random.randint(0,999)
    else:
        raise ValueError


if __name__ == "__main__":
    main()