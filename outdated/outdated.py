def main():
    while True:
        date = input("Date: ")
        if len(date.split('/'))== 3:
            date = date.split('/')
            if int(date[0]) > 12 or int(date[1]) > 31:
                continue
            else:
                print(f"{int(date[2]):04}-{int(date[0]):02}-{int(date[1]):02}")
                return 0
        else:
            date = date.split(',')



main()