def main():
    frac = fuel("Fraction: ")
    if frac <= 1:
        print('E')
    elif frac  100:
        print('F')
    else:
        print(str(frac)+'%')

def fuel(s):
    while True:
        try:
            input_string = input(s).split('/')
            x,y = int(input_string[0]) , int(input_string[1])
            if round((x/y)*100) > 100:
                continue
            else:
                return round((x/y)*100)
        except (ValueError, ZeroDivisionError):
            pass

main()