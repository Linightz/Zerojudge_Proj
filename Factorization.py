'''
Written by KH 3/19/19

The program takes one integer as input and outputs all of its factors.
'''

import sys
for input in map(int,sys.stdin):
    counter=1
    repeat=0
    for i in range(2,input+1):
        if input%i==0:
            input/=i
            if repeat!=0:
                print(" * ",end="")
            print(i,end="")
            while input%i==0:
                input/=i
                counter+=1
            if counter>1:
                print("^%d"%counter, end="")
                counter=1
            repeat=1
    print()
