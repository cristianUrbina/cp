n,f = map(int,input().split())
cnt = 1;
while(n and f):
    sum = 0
    for i in range(n):
        cost = int(input())
        sum+=cost
    print("Bill #"+ str(cnt) +" costs "+str(sum)+": each friend should pay " +str(sum//f),end="\n\n")
    cnt+=1
    n,f = map(int,input().split())
