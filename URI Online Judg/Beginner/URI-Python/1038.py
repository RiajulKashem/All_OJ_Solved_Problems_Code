num = input().split(' ')

a, b = num

a, b = int(a), float(b)

if a == 1:
    print("Total: R$ %.2f"%(4.00 * b))

elif a == 2:
    print("Total: R$ %.2f"%(4.50 * b))

elif a == 3:
    print("Total: R$ %.2f"%(5.00 * b))

elif a == 4:
    print("Total: R$ %.2f"%(2.00 * b))

elif a == 5:
    print("Total: R$ %.2f"%(1.50 * b))
