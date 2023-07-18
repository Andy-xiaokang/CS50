def main():
    while True:
        date = input("Date: ").split('/')
        if len(date == 3):
            if int(date[0]) > 12 or int(date[1]) > 31:
                continue
            else:
                print(f"{date[2]:04}-{date[0]:02}-{date[1]:02}")


main()