import sys
inputs = sys.stdin.read().splitlines()
# print("inputs: \n")
# print(inputs)
n = inputs[0];
i = 1
while(i<len(inputs)):
    i+=1;
    # print("here" + inputs[i])
    m = int(inputs[i])
    aS = ""
    bS = ""
    for j in range(1,m+1):
        aChar,bChar = inputs[i+j].split()
        aS+=aChar
        bS+=bChar
    a = int(aS)
    b = int(bS)
    print(a+b)
    i=i+m+1
    if(i<len(inputs)-1):
        print()
