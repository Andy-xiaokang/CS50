import sys
import random
from pyfiglet import Figlet

figlet = Figlet()
fonts = figlet.getFonts()

if len(sys.argv) == 1:
    s = input("Input: ")
    f = random.choice(fonts)
    figlet.setFont(font=f)
    print("Output: ")
    print(figlet.renderText(s))
elif len(sys.argv) == 3:
    if sys.argv[1] != '-f' or sys.argv[1] != '--font' :
        sys.exit("Argument error")
    s = input("Input: ")
    f = sys.argv[2]
    figlet.setFont(font=f)
    print("Output: ")
    print(figlet.renderText(s))


else:
    sys.exit("Invalid argument")