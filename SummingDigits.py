def cal(n):
    m=0
    while(n>0):
        m=m+n%10
        n//=10
    return m
while True :
    num=int(input())
    if(num==0):
        break
    while(num>9):
        num=cal(num)

    print(int(num))