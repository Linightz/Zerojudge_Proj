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
