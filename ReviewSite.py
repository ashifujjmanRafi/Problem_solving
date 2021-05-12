for i in range(int(input())):
    item=int(input())
    value=[int(itm) for itm in input().split()]
    print(value.count(1)+value.count(3))
