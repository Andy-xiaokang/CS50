def main():
    amount = 50
    while amount > 0:

        insert = get_input()
        amount = amount - insert
    print("Change Owed:",0-amount)

def get_input():
    while True:
        print("Amount Due:", amount)
        insert = int(input("Insert Coin: "))
        if insert == 5 or insert == 10 or insert == 25:
            break
    return insert

main()