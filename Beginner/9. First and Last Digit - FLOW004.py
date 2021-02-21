t= int(input())
for i in range(t):
    n = int(input())
    ld=n%10
    while n>=10:
        n//=10
    sum= ld+n //n is first digit
    print(sum)
