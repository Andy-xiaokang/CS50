from cs50 import get_int
import re

def main():
    number = get_int("Number: ")
    checksum_1 = checksum1(number)
    checksum_2 = checksum2(int(number / 10))
    if (checksum_1 + checksum_2) % 10 == 0:
        check_credit(number)
    else:
        print("INVALID")


def checksum1(number):



def checksum2(number):


def check_credit(number):
    