def main():
    dict = {}
    while True:
        try:
            item = input().upper()
            if item in dict:
                dict[item] += 1
            else:
                dict[item] = 1
        except EOFError:
            break
    print(dict.keys())
    print(dict.values())
    print(dict.items())
    for i in sorted(dict.keys()):
        print(dict[i], i)

    print(sorted(dict.keys()))
main()