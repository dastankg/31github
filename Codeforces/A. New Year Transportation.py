n, m = map(int, input().split())
l = list(map(int, input().split()))
ind = 0
flag = False
while True:
    if ind > n - 1 or ind >= m:
        break
    elif ind == m - 1:
        flag = True
        break
    elif ind == n - 1:
        break
    ind = l[ind] + ind
print('YES' if flag else 'NO')
