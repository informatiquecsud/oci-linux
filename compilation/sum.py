#!/usr/bin/python3.8

import sys
from sys import argv

argc: int = len(sys.argv)

n: int = 0
if argc == 1:
    n = 100
elif argc == 2:
    n = int(sys.argv[1])
else:
    print(f"Usage: python {argv[0]} <N>")
    sys.exit(-1)

result: int = 0
for i in range(1, n + 1):
    result += i

print(f"The sum of integers up to {n} is {result}")
