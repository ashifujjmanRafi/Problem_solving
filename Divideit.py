for i in range(int(input())):
    n=int(input())
    x=0
    c1,c2,c3=0,0,0
    while(n%2==0):
        n=n/2
        c1+=1
    while(n%3==0):
        n=n/3
        c2+=1
    while(n%5==0):
        n=n/5
        c3+=1
    if(n!=1):
        print("-1")
    else:
        print(c1+c2*2+3*c3)
        