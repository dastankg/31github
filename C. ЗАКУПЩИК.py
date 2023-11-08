import math

n = int(input())
l = list(map(int, input().split()))
c = sum(l)
l1 = list(map(int, input().split()))
ans = []
ind = 0
for i, j in zip(l, l1):
    ans.append(i - j)
ans.sort(reverse=True)
for i in ans:
    c -= i
    print(c, end=' ')
