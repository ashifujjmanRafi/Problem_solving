size=int(input())
l=[int(itm) for itm in input().split()]
l.sort()
print(*l,sep=" ")