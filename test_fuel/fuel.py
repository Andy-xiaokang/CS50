def main():
    fraction = input("Fraction:")
    percent = convert(fraction)
    output = gauge(percent)
    print(output)

def convert(fraction):
    try:
        input_string = fraction.split('/')
        x,y = int(input_string[0]) , int(input_string[1])
        if y == 0:
            raise ZeroDivisionError
        if x > y:
            raise ValueError
        percent = round((x/y)*100)
        if 0 <= percent <= 100:
            return percent
        else:
            raise ValueError
    except ValueError:
        raise ValueError

def gauge(percentage):
    if 0 <= percentage <= 1:
        return "E"
    elif 99 <= percentage <=100:
        return "F"
    else:
        return f"{percentage}%"


if __name__ == "__main__":
    main()