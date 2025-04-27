valor = int(input("Digite um valor:  "))

u = valor // 1 % 10
d = valor // 10 % 10
c = valor // 100 % 10
m = valor // 1000 % 10
dm = valor // 10000 % 10
cm = valor // 100000 % 10
M = valor // 1000000 % 10
calculo =(M *(2 ** 6)) + (cm *(2 ** 5)) + (dm * (2 ** 4)) + (m * (2 ** 3)) + (c * (2 ** 2)) + (d * (2 ** 1)) + (u * (2 ** 0))
print(f'o valor em decimal: {calculo}')



