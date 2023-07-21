import sys
from tabulate import tabulate
import csv


if len(sys.argv) < 2:
    sys.exit("Too few command line arguments")
elif len(sys.argv) > 2:
    sys.exit("Too many command line arguments")
else:
    if not sys.argv[1].endswith(".csv"):
        sys.exit("Not a csv file")
    try:
        with open(sys.argv[1], "r") as file:
            reader = csv.reader(file)
            print(tabulate(reader, headers = "firstrow", tablefmt= "grid"))
    except FileNotFoundError:
        sys.exit("File does not exist")