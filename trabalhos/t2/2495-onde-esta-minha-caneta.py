import sys

def main():
    data = sys.stdin.buffer.read().split()
    idx = 0
    total = len(data)
    out = []

    while idx < total:
        n = int(data[idx])
        idx += 1

        expected_sum = n * (n + 1) // 2
        actual_sum = 0
        for i in range(n - 1):
            actual_sum += int(data[idx + i])
        idx += n - 1

        missing = expected_sum - actual_sum
        out.append(str(missing))

    print('\n'.join(out))

main()