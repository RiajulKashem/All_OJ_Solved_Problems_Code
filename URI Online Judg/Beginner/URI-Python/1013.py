import math

value = input().split()

a, b, c = value
a, b, c = int(a), int(b), int(c)

maior = (a + b + abs(a - b)) / 2
result = (maior + c + abs(maior - c)) / 2

print("%d eh o maior"%result)
