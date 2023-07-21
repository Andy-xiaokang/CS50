import sys
import os
from PIL import image

if len(sys.argv) < 3:
    sys.exit("Too few command-line arguments")
elif len(sys.argv) > 3:
    sys.exit("Too many command-line arguments")

input_extension = os.path.splitext(sys.argv[1])[1]
output_extension = os.path.splitext(sys.argv[2])[1]

if input_extension not in [".jpg",".jpeg",".png"] or output_extension not in [".jpg",".jpeg",".png"]:
    sys.exit("Invalid input")

if input_extension != output_extension:
    sys.exit("Input and output have different extensions")

shirt = Image.open("shirt.png")
size = shirt.size
try:
    before = Image.open(sys.argv[1])
    fit = ImageOps.fit(image = before, size = size)
    fit.paste(shirt)
    Image.save

except FileNotFoundError:
    sys.exit(f"Could not read {sys.argv[1]}")