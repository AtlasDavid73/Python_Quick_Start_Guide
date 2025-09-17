# terminal_clock.py
import time
from datetime import datetime
import sys

try:
    while True:
        now = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
        # \r returns cursor to line start; flush to update immediately
        sys.stdout.write("\r" + now)
        sys.stdout.flush()
        time.sleep(1)
except KeyboardInterrupt:
    print("\nGoodbye!")
