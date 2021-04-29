value = int(input())
str1 = input()
bol=0
for i in str1:
    if(i=='0'):
        bol+=1
    else:
        bol-=1
if(bol!=0):

    print('1'+ '\n' + str1)
else:

    print('2'+'\n'+str1[0:-1] + '\n' + str1[-1])
