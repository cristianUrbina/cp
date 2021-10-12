import sys
print()
inputs = sys.stdin.read().splitlines()
# format(2**(1/2), '.60g')
for i in range(len(inputs)):
    r,n = map(float,inputs[i].split())
    print("%d"%r**n)
