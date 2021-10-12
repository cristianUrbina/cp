s = input()
while s!="*":
    a = ""
    b = ""
    if s.isdecimal():
        result = ""
        n = int(s)
        carry = 0
        while(n>=1):
            l = int((n-1)%26)-carry
            carry = 0
            if (l<0):
                l=25
                carry=1
            if(n%26==0):
                carry=1
            if(n>=26 and carry==1 or carry==0):
                result+=chr(l+97)
            n//=26
        a = result[::-1]
        b = s
    else:
        result = 0
        m = 0
        for i in range(len(s)-1,-1,-1):
            result += (26**m)*(ord(s[i])-ord('a')+1)
            m +=1
        a = s
        b = str(result)
    print("%-22s"%a,end="")
    cnt = (len(b))%3
    if cnt == 0:
        cnt = 3
    bAux = ""
    for i in range(len(b)):
        cnt-=1
        bAux+=b[i]
        if cnt == 0 and i<len(b)-1:
            bAux+=","
            cnt = 3

    print("%s"%bAux)
    s = input()
# print("%-30s"%"hell")
# 123
