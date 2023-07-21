import sys
if len(sys.argv) < 2:
    sys.exit("Too few command line arguments")
elif len(sys.argv) > 2:
    sys.exit("Too many command line arguments")
else:
    filename = sys.argv[1]
    try:
        with open(filename, "r") as file:
    except FileNotFoundError:
        sys.exit("File does not exist")