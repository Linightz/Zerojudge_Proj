'''
Written by KH 3/18/19

The program takes one A.D. year (int) as input and output if it's a leap year or a average year.
'''

import sys
for s in map(int, sys.stdin):
    if s%4==0 and s%100!=0 or s%400==0:
        print("閏年")
    else: print("平年")
