def main():
    # case insensitive and ignore space
    s = input("Greeting: ").lower().strip()
    if s.startswith('hello'):
        print('$0')
    elif s.startswith('h'):
        print('$20')
    else:
        print('$100')


main()