code_1, num_1, price_1 = input().split(' ')

code_2, num_2, price_2 = input().split(' ')

code_1, num_1, code_2, num_2 = int(code_1), int(num_1), int(code_2), int(num_2)

price_1, price_2 = float(price_1), float(price_2)

to_be_paid = (num_1 * price_1) + (num_2 * price_2)

print("VALOR A PAGAR: R$ %.2F"%to_be_paid)
