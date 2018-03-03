TK = int(input())

print(TK)
print("%d nota(s) de R$ 100,00"%(TK / 100))

TK %= 100
print("%d nota(s) de R$ 50,00" % (TK / 50))

TK %= 50
print("%d nota(s) de R$ 20,00"%(TK / 20))

TK %= 20
print("%d nota(s) de R$ 10,00" % (TK / 10))

TK %= 10

print("%d nota(s) de R$ 5,00" % (TK / 5))

TK %= 5
print("%d nota(s) de R$ 2,00" % (TK / 2))

TK %= 2
print("%d nota(s) de R$ 1,00" % (TK / 1))
