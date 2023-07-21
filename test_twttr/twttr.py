def main():
    word = input("Input: ")
    after = shorten(word)
    print("Output: " + after)


def shorten(word):
    after = ''
    for s in word:
        if s.lower() != 'a' and s.lower() != 'e' and s.lower() != 'i' and s.lower() != 'o' and s.lower() != 'u':
            after = after + s
    return after


if __name__ == "__main__":
    main()