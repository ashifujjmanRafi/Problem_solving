for i in range(int(input())):
    index=int(input())
    array=[int(itm) for itm in input().split()]
    array.sort()
    print(index-array.count(array[0]))