n = int(input())
array=[int(itm) for itm in input().split()]
array.sort()
print(min((array[n-1]-array[1]),(array[n-2]-array[0])))