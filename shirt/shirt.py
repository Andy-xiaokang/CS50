import sys
from PIL import image

if len(sys.argv) < 3:
    sys.exit("Too few command-line arguments")
elif len(sys.argv) > 3:
    sys.exit("Too many command-line arguments")
else:
    if not sys.argv[1].endswith((".jpg", ".jpeg", ".png")) or not sys.argv[2].endswith((".jpg", ".jpeg", ".png")):
        sys.exit("Invalid Input")
    elif sys.argv[1].split(".")[1] != sys.argv[2].split["."][1]:
        sys.exit("Input and output have different extensions")
