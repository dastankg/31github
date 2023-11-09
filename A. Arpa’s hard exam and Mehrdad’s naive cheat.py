n = int(input())
if n == 0:
    print(1)
else:
    n %= 4
    if n == 1:
        print(8)
    elif n == 2:
        print(4)
    elif n == 3:
        print(2)
    else:
        print(6)
