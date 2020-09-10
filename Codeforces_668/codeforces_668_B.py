t = int(input())

for t in range(t):
    n = int(input())

    a = list(map(int,input().split(' ')))

    neg = 0
    pos = 0
    temp = 0

    for i in range(n):

        if a[i]<0 and temp == 0:
            neg += abs(a[i])

        elif a[i]>0:
            temp += a[i]

        elif a[i]<0 and temp>0:
            if abs(a[i])>temp:
                neg += abs(a[i])-temp
                temp = 0

            else:
                temp -= abs(a[i])

##        print(neg,temp)

    print(abs(neg))
