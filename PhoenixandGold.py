tc=int(input())
for i in range(tc):
    n,x=map(int,input().split())
    l1=[int(itm) for itm in input().split()]
    sum=0
    for j in l1:
        sum+=j
    if(sum>x):
        print("YES")
        k=0
        while(k<n):
            if(l1[k]==x):
                tem=l1[k]
                l1[k]=l1[k+1]
                l1[k+1]=tem
            k=k+1
            
    else:
        print("NO")
    
