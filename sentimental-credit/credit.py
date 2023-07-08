from cs50 import get_int
import re

def main():
    number = get_int("Number: ")
    checksum_1 = checksum1(number)
    checksum_2 = checksum2(int(number / 10))
    if (checksum_1 + checksum_2) % 10 == 0:
        check_credit(str(number))
    else:
        print("INVALID")


def checksum1(number):
    checksum1 = number % 10
    while number != 0:
        number = int(number/100)
        checksum1 = checksum1 + number % 10
    return checksum1

def checksum2(number):
    checksum2 = 2*(number % 10)
    if checksum2 > 10:
        checksum2 = int(checksum2/10) + checksum2%10

    while number != 0:
        number = int(number/100)
        if 2*(number % 10) > 9:
            checksum2 = checksum2 + int(2*(number % 10)/10) + 2*(number % 10) % 10
        else:
            checksum2 = checksum2 + 2*(number % 10)
    return checksum2


def check_credit(number):
    if len(number) == 15 and (int(number[0]+number[1]) == 34 or int(number[0]+number[1]) == 37):
        print("AMEX")
    elif len(number) == 16 and (int(number[0]+number[1]) == 51 or int(number[0]+number[1]) == 52 or int(number[0]+number[1]) == 53 or int(number[0]+number[1]) == 54 or int(number[0]+number[1]) == 55):
        print("MASTERCARD")
    elif len(number) == 16 and int(number[0]) == 4:
        print("VISA")
    elif len(number) == 13 and int(number[0]) == 4:
        print("VISA")
    else:
        print("INVALID")


main()