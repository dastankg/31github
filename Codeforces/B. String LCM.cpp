import math

for _ in range(int(input())):
    s = input()
    t = input()
    s_len = len(s)
    t_len = len(t)
    n = math.lcm(s_len, t_len)
    s *= n // s_len
    t *= n // t_len
    if s == t:
        print(s)
    else:
        print(-1)
