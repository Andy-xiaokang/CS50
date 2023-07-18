def main():
    while True:
        date = input("Date: ").split('/')
        if len(date)== 3:
            if int(date[0]) > 12 or int(date[1]) > 31:
                continue
            else:
                print(f"{int(date[2]):04}-{int(date[0]):02}-{int(date[1]):02}")
                return 0
        else:
            date = date[0].split(',')
            while True:
                if len(date) !=2:
                    


main()