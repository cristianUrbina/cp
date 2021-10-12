while True:
  try:
    n,a= map(int,input().split())
  except:
    break;
  res = 0;
  for i in range(1,n+1):
    res+=i*a**i
  print(res)

# from sys import stdin
#
# for line in stdin:
#     if line == '': # If empty string is read then stop the loop
#         break
#     n,a = map(int,line.split())
#     res = 0;
#     for i in range(1,n+1):
#         res+=i*(a**i)
#     print(res)
