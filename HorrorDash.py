testcase = int(input())
while(int(testcase)>0):
    itm=input()
    mylist=[int(itm) for itm in input().split()]
    print(max(mylist))
    testcase=testcase-1