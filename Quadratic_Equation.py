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
