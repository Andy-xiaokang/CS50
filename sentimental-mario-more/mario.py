def main():
    height = get_height()
    draw(height)


def get_height():
    while True:
        try:
            h = int(input("Height: "))
            if h > 0:
                return h
        except ValueError:
            print("Not an interger")

def draw(h):
    for i in range(h):
        for j in range(h-1-i):
            print(" ", end = "")
        for j in range(h-1-i, h):
            print("#", end = "")
        print("##", end = "")
        for j in range(i+1):
            print("#", end = "")
        print("\n")


main()
