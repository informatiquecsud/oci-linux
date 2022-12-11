#!/usr/bin/python3.8

from sys import argv

argc: int = len(argv)

n: int = 0
if argc == 1:
    n = 100
elif argc == 2:
    n = int(argv[1])
else:
    print(f"Usage: argv[0] <N>")

result: int = 0
for i in range(1, n + 1):
    result += i

print(f"The sum of integers up to {n} is {result}")
