import emoji
def main():
    str = input("Input: ")
    print("Output: " + emoji.emojize(str, language='es'))

if __name__ == "__main__":
    main()