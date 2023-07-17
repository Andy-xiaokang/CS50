def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    if len(s) > 6 or len(s) < 2:
        return False
    if not s[0:2].isalpha():
        return False
    for i in s:
        if not i.isalnum():
            return False

    for i in s:
        if i.isdigit():
            index = s.find(i)
            if s[index] == '0':
                return False
    if not s[index:].isdigit():
        return False

    return True

main()