for i in range(int(input())):
    a,b = map(int,input().split())
    '''print(b)'''
    arr=[int(im) for im in input().split()]
    print(b) if(b<=sum(arr)) else print(sum(arr))
        
    
    