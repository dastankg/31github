n, k = map(int, input().split())
k -= 1
dp1 = {1 : 0}
for i in range(2, 51):
    dp1[i] = dp1[i-1] * 2 + 1

for i in range(1, 51):
    q = 2 ** i
    if k % q == dp1[i]:
        print(i)
        break
