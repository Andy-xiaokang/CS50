def main():
    camel = input("camelCase: ")
    after = ''
    for s in camel:
        if s.islower():
            after = after + s
        elif s.isupper():
            after = after + '_' + s.lower()

    print("snake_case: " + after)

main()