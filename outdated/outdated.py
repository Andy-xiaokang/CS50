def main():
    M = [
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
]
    while True:
        date = input("Date: ")
        if len(date.split('/'))== 3:
            date = date.split('/')
            if date[0].isalpha():
                continue
            if int(date[0]) > 12 or int(date[1]) > 31:
                continue
            else:
                print(f"{int(date[2]):04}-{int(date[0]):02}-{int(date[1]):02}")
                return 0
        else:
            date = date.split(',')
            if len(date) != 2:
                continue
            # print(1)
            year = int(date[1].strip())
            date1 = date[0]
            month = date1.split(' ')[0]
            if month not in M:
                continue
            month = M.index(month) + 1
            day = int(date1.split(' ')[1])
            if month > 12 or day > 31:
                continue
            print(f"{year:04}-{month:02}-{day:02}")
            return 0


main()