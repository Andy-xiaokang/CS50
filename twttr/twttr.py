def main():
    before = input("Input: ")
    after = ''
    for s in before:
        if s.lower() != 'a' and s.lower() != 'e' and s.lower() != 'i' and s.lower() != 'o' and s.lower() != 'u':
            after = after + s
    print("Output: " + after)

main()