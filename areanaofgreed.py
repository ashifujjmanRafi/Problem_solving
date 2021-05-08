n=int(input())
array=[int(itm) for itm in input().split()]
array.sort()
ans=0
for i in array:
    if(i%2==0):
        ans+=1
print(min(ans,n-ans))