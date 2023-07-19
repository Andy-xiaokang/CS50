from emoji import emojize

def main():
    str = input("Input: ")
    print("Output: " + emojize(str, language='alias'))


main()
