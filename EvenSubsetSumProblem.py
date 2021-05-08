for i in range(int(input())):
    index= int(input())
    array=[int(itm) for itm in input().split()]
    a,b=0,0
    for i in range(len(array)):
        if(array[i]%2==0):
            print(i+1)
            break
        elif(a<3 and array[i]%2!=0):
            b=i
            array.append(b)
            a+=1
    
    if(a==2):
        print(array[index:])
    else:
        print("-1")
            
            