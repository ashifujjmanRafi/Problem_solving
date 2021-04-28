for i in range(int(input())):
    m,n=map(int,input().split())
    if((m*(n-1))+(n*(m-1))<=m*n):
        print("YES")
    else:
        print("NO")

    