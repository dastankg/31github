from fractions import Fraction
a1, b1, a2, b2, a3, b3 = map(int, input().split())
r1 = (a2 * b1) / (a1 * b2)
r2 = (a3 * b2) / (a2 * b3)
if r1 == r2:
    if abs(r1) < 1:
        a = (a1 / b1) / (1 - r1)
        decimal_number = a
        fraction = Fraction(decimal_number).limit_denominator()
        print(fraction.numerator, fraction.denominator)
    else:
        print('2 2')
else:
    print('3 3')
