def main():
    dict = {}
    while True:
        try:
            item = input().upper()
            if item in dict:
                dict[''] += 1
            else:
                dict['']
        except EOFError:
            break

main()