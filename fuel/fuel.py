def main():
    frac = fuel("Fraction: ")
    print(str(frac)+'%')

def fuel(s):
    try:
        input_string = input(s).split('/')
        x,y = int(input_string[0]) , int(input_string[1])
        return round((x/y)*100)
    except (ValueError, ZeroDivisionError):
        pass

main()