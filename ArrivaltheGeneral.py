soilder = int(input())
height=[]
max=0
min=1000
maxindex=0
minindex=0
for x in range(soilder):
    h=int(input())
    height.append(h)
    if(h>max):
        max=h
        maxindex=x
    if(h<=min):
        min=h
        minindex=x

if(maxindex>minindex):
    print((maxindex-1)+(soilder-minindex)-1)
else:
    print((maxindex-1)+(soilder-minindex))
