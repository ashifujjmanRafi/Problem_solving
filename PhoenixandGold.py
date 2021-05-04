tc=int(input())
for i in range(tc):
    n,x=map(int,input().split())
    l1=[int(itm) for itm in input().split()]
    sum=0
    sum1=0
    for j in l1:
        sum+=j
    if(sum>x):
        print("YES")
        index=0
        l1.sort(reverse=True)
        print(*l1,sep=" ")
    else:
        print("NO")
    
