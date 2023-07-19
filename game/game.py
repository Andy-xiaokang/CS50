import random

while True:
    try:
        level = int(input("Level: "))
        if level > 0:
            level = random.randint(1,level)
            break
        else:
            continue
    except ValueError:
        pass

while True:
    try:
        guess = int(input("Guess: "))
        if guess < 0:
            continue
        elif guess < level:
            print("Too small!")
        elif guess > level:
            print("Too large!")
        else:
            print("Just right!")
            break
    except ValueError:
        pass


