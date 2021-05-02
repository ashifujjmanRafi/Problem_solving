size = int(input())
str1=input()

zero=str1.count("0")
#one=str1.count("1")


'''ans=
for i in str1:
    if(i=="0"):
        ans+=1
    else:
        ans-=1'''
    
print(abs(zero-(size-zero)))