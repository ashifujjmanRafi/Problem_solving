for i in range(int(input())):
    n= int(input())
    array=[int(itm) for itm in input().split()]
    lis1=list(array)
    
    lis1.sort()
    '''print(lis1)
    print(array)'''
    k=0
    while(k<len(array)):
        if(array[k]!=lis1[1]):
            print(k+1)
        k+=1
    
    
        
    '''la=set(lis1)
    kis=(list(la))
    print(kis)'''#to find unique value

            
        