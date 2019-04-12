'''
Written by KH 3/30/19

The program takes 2 ints as input separated by space, and outputs their greatest common divisor.
'''

import sys

for line in sys.stdin:
    a, b = map(int, line.split())
    rem = a
    while rem != 0:
        rem = a % b
        a = b
        b = rem
    print(a)
