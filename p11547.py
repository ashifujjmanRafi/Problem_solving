'''““Multiply n by 567, then divide the result by 9, then add 7492, then multiply by 235, then divide
by 47, then subtract 498. What is the digit in the tens column?'''
tc=int(input())
while(tc>0):
    item=int(input())
    '''
    item=item*567
    item=int(item/9)
    item=item+7492
    item=item*235
    item=int(item/47)
    item=item-498
    item=item%10'''
    item=int(int(((item*63+7492)*235)/47-498)/10)
    if(item<0):item=item*-1
    print(item%10)
    
    tc=tc-1

