'''
Written by KH 3/30/19

The program takes an int input of the last 9 digits of a valid Taiwanese ID and outputs all the possible letters in the front.
Ex. input:
130245675
123456789
Ex. output:
FS
AMW
'''

import sys

for n in sys.stdin:
    capital = {
        'A': [1, 0],
        'B': [1, 1],
        'C': [1, 2],
        'D': [1, 3],
        'E': [1, 4],
        'F': [1, 5],
        'G': [1, 6],
        'H': [1, 7],
        'I': [3, 4],
        'J': [1, 8],
        'K': [1, 9],
        'L': [2, 0],
        'M': [2, 1],
        'N': [2, 2],
        'O': [3, 5],
        'P': [2, 3],
        'Q': [2, 4],
        'R': [2, 5],
        'S': [2, 6],
        'T': [2, 7],
        'U': [2, 8],
        'V': [2, 9],
        'W': [3, 2],
        'X': [3, 0],
        'Y': [3, 1],
        'Z': [3, 3]
    }
    index, total = 0, 0
    for i in range(8, 0, -1):
        total += int(n[index]) * i
        index += 1
    for i in capital:
        ttl = total
        ttl += capital[i][0] + capital[i][1]*9
        if (ttl + int(n[8])) % 10 == 0:
            print(i, end="")
    print()
