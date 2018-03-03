import math

num = input().split(' ')

x1, y1 = num

num = input().split(' ')

x2, y2 = num

x1, y1, x2, y2 = float(x1), float(y1), float(x2), float(y2)

num = math.sqrt(math.pow((x2 - x1), 2) + math.pow((y2 - y1), 2))

print("%.4f"%num)
