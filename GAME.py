for i in range(int(input())):
    sin=input()
    sout=min(sin.count('0'),sin.count('1'))

    print( 'DA' if (sout%2==1) else 'NET')