import sys

def main():
    data = sys.stdin.buffer.read().split()
    idx = 0
    total = len(data)
    out = []

    while idx < total:
        n, m = int(data[idx]), int(data[idx + 1])
        idx += 2

        pos = {}
        for i in range(n):
            pos[int(data[idx + i])] = i
        idx += n

        current = 0  # começa na casa de menor número (posição 0)
        time = 0
        for i in range(m):
            p = pos[int(data[idx + i])]
            time += abs(p - current)
            current = p
        idx += m

        out.append(str(time))

    print('\n'.join(out))

main()