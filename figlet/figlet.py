import sys
from pyfiglet import Figlet

figlet = Figlet()
fonts = figlet.getFonts()

if len(sys.argv) == 1:
    s = input("Input: ")
    
elif len(sys.argv) == 3:

else:
    sys.exit("Invalid argument")