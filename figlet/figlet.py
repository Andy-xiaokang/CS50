import sys
from pyfiglet import Figlet

figlet = Figlet()
fonts = figlet.getFonts()

if len(sys.argv) == 1:

elif len(sys.argv) == 3:

else:
    sys.exit("Invalid argument")