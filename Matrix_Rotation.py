'''
Written by KH 3/21/19

The program rotate an n * m matrix to a m * n matrix. It first takes two ints as n and m separated by space, then it takes n number of lines in which contains m number of ints separated by spaces. Finally the program outputs rotated matrix.
Ex. input:
2 3
3 1 2
8 5 4
Ex. output:
3 8
1 5
2 4
'''

import sys
for input in sys.stdin:
    arr=[]
    r,c=map(int,input.split())
    for i in range(r):
        ele=list(map(int,sys.stdin.readline().split()))
        arr.append(ele)
    for i in range(c):
        for j in range(r):
            print("%d "%arr[j][i],end="")
        print()
