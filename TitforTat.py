tc= int(input())
l1=[0]
for i in range(tc):
    n,k=map(int,input().split())
    l1=[int(n) for n in input().split()]
    if(n>k):
        k=k
    else:
        k=n
    #l1.sort()
    print(l1)
    for j in range(k):
        l1[j]=l1[j]+1
        print(l1[j])
    l1[n-1]=l1[n-1]-1
    print(l1)