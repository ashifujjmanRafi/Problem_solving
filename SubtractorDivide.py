tc= int(input())
for i in range(tc):
    a=int(input())
    if(a==1):
        print(0)
    elif(a==2):
        print(1)
    elif(a%2==0 or a==3):
        print("2")
    else:
        print("3")