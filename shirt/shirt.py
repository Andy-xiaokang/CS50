import sys
from PIL import image

if len(sys.argv) < 3:
    sys.exit("Too few command-line arguments")
elif len(sys.argv) > 3:
    sys.exit("Too many command-line arguments")
else:
    if (not argv[1].endswith(".jpg") and not argv[1].endswith(".jpeg") and not argv[1].endswith(".png")) or (not argv[2].endswith(".jpg") and not argv[2].endswith(".jpeg") and not argv[2].endswith(".png")):
        