import math

for _ in range(int(input())):
    n, m, k = map(int, input().split())
    a = n // k
    b = min(a, m)
    m -= b
    if m <= 0:
        print(b)
    else:
        c = math.ceil(m / (k - 1))
        print(b - c)
