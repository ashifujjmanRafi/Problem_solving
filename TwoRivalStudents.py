for i in range(int(input())):
    n,x,a,b=map(int,input().split())
    ans = abs(a-b)
    if(ans+x>=(n-1)):
        print(n-1)
    else:
        print(ans+x)
    '''elif(ans+x<(n-1)):
        print(ans+x)'''
    




