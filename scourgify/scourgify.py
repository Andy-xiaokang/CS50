import sys
import csv

if len(sys.argv) < 3:
    sys.exit("Too few command-line argument")
elif len(sys.argv) > 3:
    sys.exit("Too many command-line argument")
else:
    try:
        with open(sys.argv[1], "r") as csvfile:
            reader = csv.DictReader(csvfile)
            with open(sys.argv[2], "w") as file:
                fieldnames = ["first","last","house"]
                writer = csv.DictWriter(file, fieldnames = fieldnames)
                writer.writerheader()
                for student in reader:
                    first = student["name"].split(",")[1].strip()
                    last = student["name"].split(",")[0].strip()
                    house = student["house"]
                    writer.writerow({"first":first, "last":last, "house":house})
    except FileNotFoundError:
        sys.exit(f"Could not read {sys.argv[1]}")