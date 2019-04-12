'''
Written by KH 3/30/19

The program takes 2 ints as input n and m, meaning the range which the program will look for all the Armstrong numbers within.
(n<m, n>0, m<=1000000)
Ex. input:
100 999
10 99
Ex. output:
153 370 371 407
none
'''

import sys

for line in sys.stdin:
    frm, to = map(int, line.split())
    flag = 0
    for i in range(frm, to+1):
        total = 0
        for j in str(i):
            total += int(j) ** len(str(i))
        if total == i:
            print(i, end=" ")
            flag = 1
    if flag == 0:
        print("none")
    else:
        print()
