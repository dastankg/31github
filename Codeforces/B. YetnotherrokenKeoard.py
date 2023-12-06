for _ in range(int(input())):
    s = input()
    a = s.count('b')
    b = s.count('B')
    ans = []
    low = []
    up = []
    for i in range(len(s)):
        if s[i] not in ['b', 'B']:
            if s[i].islower():
                low.append(i)
            else:
                up.append(i)
        else:
            if s[i] == 'B' and len(up) != 0:
                up.pop()
            if s[i] == 'b' and len(low) != 0:
                low.pop()
    left = 0
    right = 0
    while left < len(low) and right < len(up):
        if low[left] < up[right]:
            print(s[low[left]], end='')
            left += 1
        else:
            print(s[up[right]], end='')
            right += 1
    while left < len(low):
        print(s[low[left]], end='')
        left += 1
    while right < len(up):
        print(s[up[right]], end='')
        right += 1
    print()
