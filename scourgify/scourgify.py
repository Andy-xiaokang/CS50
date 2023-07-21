import sys
import csv

if len(sys.argv) < 3:
    sys.exit("Too few command-line argument")
elif len(sys.argv) > 3:
    sys.exit("Too many command-line argument")
else:
    try:
        with open(sys.argv[1], "r") as csvfile:
            dictreader = csv.DictReader(csvfile)
            
    except FileNotFoundError:
        sys.exit(f"Could not read {sys.argv[1]}")