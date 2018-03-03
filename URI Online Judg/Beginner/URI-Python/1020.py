input_day = int(input())

print(input_day // 365,"ano(s)")
print(input_day % 365 // 30, "mes(es)")
print(input_day % 365 % 30, "dia(s)")
