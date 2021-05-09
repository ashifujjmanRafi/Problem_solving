for i in range(int(input())):
    index= int(input())
    array=[int(itm) for itm in input().split()]
    if(index==1 and array[0]%2==1):
        print("-1")
    else:
        if(array[0]%2==0):
            print(1)
            print(1)
        elif(array[1]%2==0):
            print(1)
            print(2)
        else:
            print(2)
            print(1,2)
#solved

    
            