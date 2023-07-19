import random


def main():
    score = 0
    level = get_level()
    for i in range(10):
        error = 0
        x,y = generate_integer(level), generate_integer()
        print(f"{x} + {y} = ", end = '')
        answer = input()
        while True:
            try:
                if x + y == int(answer):
                    score += 1
                    break
                else:
                    error += 1

                    print("EEE")
                    print(f"{x} + {y} = ", end = '')
                    answer = input()
                    
            except ValueError:




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