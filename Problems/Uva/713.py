n = int(input())
for i in range(n):
    line = input().split()
    a,b = line
    c = int(a[::-1])+int(b[::-1])
    sc = str(c)
    print(int(sc[::-1]))
