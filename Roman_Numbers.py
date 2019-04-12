'''
Written by KH 3/20/19

The program takes two Roman numerals in one line separated by a space, and returns the difference of value in Roman numeral.
Enter # to quit the program.
Ex. input
"MM II"
Ex. output
"MCMXCVIII"
'''

def toNum(r,n):
    total,pre=0,1000
    for i in n:
        total+=r[i]
        if pre<r[i]:
            total-=(pre*2)
        pre=r[i]
    return total

def toRom(diff):
    while diff>=1000:
        diff-=1000
        print('M',end="")
    while diff>=900:
        diff-=900
        print('CM',end="")
    while diff>=500:
        diff-=500
        print('D',end="")
    while diff>=400:
        diff-=400
        print('CD',end="")
    while diff>=100:
        diff-=100
        print('C',end="")
    while diff>=90:
        diff-=90
        print('XC',end="")
    while diff>=50:
        diff-=50
        print('L',end="")
    while diff>=40:
        diff-=40
        print('XL',end="")
    while diff>=10:
        diff-=10
        print('X',end="")
    while diff>=9:
        diff-=9
        print('IX',end="")
    while diff>=5:
        diff-=5
        print('V',end="")
    while diff>=4:
        diff-=4
        print('IV',end="")
    while diff>=1:
        diff-=1
        print('I',end="")
    print()

import sys
roman={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
for input in sys.stdin:
    if input=='#\n': break
    a, b=input.split()
    if a==b:
        print("ZERO")
        continue
    a,b=toNum(roman,a),toNum(roman,b)
    if a>b: diff=a-b
    else: diff=b-a
    toRom(diff)
