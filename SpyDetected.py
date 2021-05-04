for i in range(int(input())):
    n= int(input())
    array=[int(itm) for itm in input().split()]
    lis1= array

    lis1.sort(reverse=True)

    print(lis1)
    for i in array:
        if(i!=lis1[i]):
            print(i+1)
            
        