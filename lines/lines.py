import sys

if len(sys.argv) < 2:
    sys.exit("Too few command line arguments")
elif len(sys.argv) > 2:
    sys.exit("Too many command line arguments")
else:
    filename = sys.argv[1]
    if not filename.endswith(".py"):
        sys.exit("Not a python file")
    try:
        with open(filename, "r") as file:
            lines = file.readlines()
    except FileNotFoundError:
        sys.exit("File does not exist")

complexity = len(lines)
for i in lines:
    if i.lstrip().startswith("#"):
        complexity -= 1
    if i.strip() == "":
        complexity -= 1


print(complexity)
