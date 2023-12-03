n = int(input())
m = int(input())
c = m + n
c = int(str(c).replace('0', ''))
c1 = int(str(n).replace('0', '')) + int(str(m).replace('0', ''))
print('YES' if c == c1 else 'NO')
