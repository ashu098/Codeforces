t = int(input())

for t1 in range(t):

    n = int(input())

    a = list(map(int,input().split(' ')))

    s = -1000000000000000000

    if n<=10:
        for i1 in range(0,n):
            for i2 in range(i1+1,n):
                for i3 in range(i2+1,n):
                    for i4 in range(i3+1,n):
                        for i5 in range(i4+1,n):
                            x = a[i1]*a[i2]*a[i3]*a[i4]*a[i5]
                            s = max(s,x)

    else:
        a.sort()
        b = []

        for i in range(0,5):
            b.append(a[i])

        for i in range(len(a)-5,len(a)):
            b.append(a[i])

        n = len(b)

##        print(a)
##
##        print(b)

        for i1 in range(0,n):
            for i2 in range(i1+1,n):
                for i3 in range(i2+1,n):
                    for i4 in range(i3+1,n):
                        for i5 in range(i4+1,n):
                            x = b[i1]*b[i2]*b[i3]*b[i4]*b[i5]
                            s = max(s,x)

    print(s)

        
        
