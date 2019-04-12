'''
Written by KH 3/19/19

Given ax^2 * bx * c = 0, the program takes 3 int inputs as a, b, c, separated by spaces, and output its root.
'''

import sys
import math
for input in sys.stdin:
    a,b,c = map(int, input.split())
    if b*b-4*a*c<0:
        print("No real root")
    elif b*b-4*a*c==0:
        print("Two same roots x=%d"%int((-b + math.sqrt(b*b-4*a*c))/(2*a)))
    else:
        print("Two different roots x1=%d , x2=%d"%(int((-b + math.sqrt(b*b-4*a*c))/(2*a)),int((-b - math.sqrt(b*b-4*a*c))/(2*a))))
