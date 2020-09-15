t = int(input())

for t1 in range(t):

    n = int(input())

    a = list(map(int,input().split(' ')))

    a.sort()

    s = 0
    j = 0

    f = []
    f1 = 0

    for i in range(n):
        f.append(0)

##    print(a)

    for i in range(n):
        if a[i] == j:
            j += 1
            f[i] = 1

        elif a[i]>j:
            s += j
            f1 = 1
            break

    if f1 == 0:
        s += j

##    print(s)
    j = 0
    f1 = 0
    
    for i in range(n):

        if f[i] == 0 and a[i] == j:
            j += 1

        elif a[i]>j:
            s += j
            f1 = 1
            break

    if f1 == 0:
        s += j

    print(s)
