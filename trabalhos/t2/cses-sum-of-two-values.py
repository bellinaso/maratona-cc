n, x = map(int, input().split())

numbers = list(map(int, input().split()))

seen = {}

for i, number in enumerate(numbers):
    complement = x - number

    if complement in seen:
        print(seen[complement] + 1, i + 1)
        break

    seen[number] = i
else:
    print("IMPOSSIBLE")