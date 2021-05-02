testcase = int(input())
for i in range(testcase):
    x= int(input())
    k=2
    while(k<=30):
        p=(2**k)-1
        if(x%p==0):
            print(x//p)
            break
        else:
            k+=1

