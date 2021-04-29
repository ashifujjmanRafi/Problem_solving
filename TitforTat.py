tc= int(input())
l1=[0]
for i in range(tc):
    n,k=map(int,input().split())
    l1=[int(n) for n in input().split()]
    if(n>k):
        k=k
    else:
        k=n
    
    #print(l1)
    for j in range(k):
        l1[j]=l1[j]-1
        l1[n-1]=l1[n-1]+1
        n-=n
    print(l1)