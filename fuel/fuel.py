def main():
    frac = fuel("Fraction: ")
    print(str(frac)+'%')

def fuel(s):
    try:
        x,y = int(input(s).split('/')[0]) , int(input(s).split('/')[0])
        return round((x/y)*100)
    except (ValueError, ZeroDivisionError):
        pass

