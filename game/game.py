while True:
    try:
        level = int(input("Level: "))
        if level > 0:
            break
        else:
            continue
    except ValueError:
        pass

while True:
    