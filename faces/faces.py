def main():
    face = input("")
    print(convert(face))

def convert(s):
    s = s.replace(':)', '🙂')
    s = s.replace(':(', '🙁')
    return s


main()

