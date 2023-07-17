def main():
    x, y, z = input("Expression: ").split(" ")
    x = float(x)
    z = float(z)
    match y:
        case '+':
            s = x + z
            print(f"{s}:.1f")
            
main()
