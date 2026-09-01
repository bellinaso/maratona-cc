strings: list[list[str]] = []

for i in range(int(input())):
    strings.append(input().split(" "))

for l in strings:
    ordenado = sorted(l, key=len, reverse=True)
    print(" ".join(ordenado))