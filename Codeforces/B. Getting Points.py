import math
 
for _ in range(int(input())):
    n, P, l, t = map(int, input().split())
    c = math.ceil(n / 7)
    left = 0
    r = n
    while r > left + 1:
        m = (left + r) // 2
        work = n - m
        a = 0
        if math.ceil(c / 2) > work:
            a += work * l
            a += work * t * 2
        else:
 
            a += (math.ceil(c / 2) * t) * 2
            if c % 2 != 0:
                a -= t
            a += work * l
        if a >= P:
            left = m
        else:
            r = m
    print(left)
