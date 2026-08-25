m, n = map(int, input().split())

hay_points = {}

for _ in range(m):
    nome, price = input().split()
    hay_points[nome] = int(price)

for _ in range(n):
    valor = 0

    while True:
        linha = input()

        if linha == ".":
            break

        palavras = linha.split()

        for palavra in palavras:
            if palavra in hay_points:
                valor += hay_points[palavra]

    print(valor)