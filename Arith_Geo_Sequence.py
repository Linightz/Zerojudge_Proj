'''
Written by KH 3/18/19

The program first takes a int as how many input sequences, then takes the number of lines of 4 ints separated by spaces and calculates the 5th number depending on the previous 4 ints whether they form an arithmetic or a geometric sequence.
Ex. input:
2
1 2 3 4
2 4 8 16
Ex. output:
1 2 3 4 5
2 4 8 16 32
'''

import sys
for i in map(int, sys.stdin):
    for j in range(i):
        f = list(map(int, sys.stdin.readline().split()))
        if f[1]-f[0]==f[2]-f[1]:
            f.append(f[3]+(f[3]-f[2]))
            for k in f:
                print(k,end=" ")
            print()
        else:
            f.append(int(f[3]*(f[3]/f[2])))
            for k in f:
                print(k,end=" ")
            print()
