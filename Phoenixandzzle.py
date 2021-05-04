for i in range(int(input())):
    n=int(input())
    if((n/2)**0.5-int((n/2)**0.5)==0 or (n/4)**0.5-int((n/4)**0.5)==0):
        print("YES")
    else:
        print("NO")