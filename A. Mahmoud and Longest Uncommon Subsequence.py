s = input()
t = input()
if len(s) != len(t):
    print(max(len(s), len(t)))
elif s != t:
    print(len(t))
else:
    print(-1)
