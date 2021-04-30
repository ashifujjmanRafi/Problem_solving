tc= int(input())
for i in range(tc):
    n,k=map(int,input().split())
    l1=[int(n) for n in input().split()]
    m=int(n)
    for j in range(m-1):
        if(l1[j]<k):
            k-=l1[j]
            l1[n-1]+=l1[j]
            l1[j]=0
        else:
            l1[j]-=k
            l1[n-1]+=k
            k=0        
        

    print(*l1,sep=" ")