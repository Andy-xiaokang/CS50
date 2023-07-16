def main():
    face = input("")
    print(convert(face))

def convert(s):
    after = s.replace(':)', '🙂')
    after = s.replace(':(', '🙁')
    return after


main()

