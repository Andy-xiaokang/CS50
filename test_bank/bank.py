def main():
    # case insensitive and ignore space
    s = input("Greeting: ")
    v = value(s)
    print(f"${v}")

def value(s):
    s = s.lower().strip()
    if s.startswith('hello'):
        return 0
    elif s.startswith('h'):
        return 20
    else:
        return 100

if __name__ == "__main__":
    main()