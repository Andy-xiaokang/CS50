
def main():
    amount = 50
    while amount > 0:
        print("Amount Due:", amount)
        insert = get_input()
        amount = amount - insert
    print("Change Owed:",0-amount)

def get_input():
    while True:
        insert = int(input("Insert Coin: "))
        if insert == 5 or insert == 10 or insert == 25:
            break
        else:
            print("Amount Due:", amount)
    return insert

main()