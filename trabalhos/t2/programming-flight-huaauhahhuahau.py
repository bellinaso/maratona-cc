def main():
    s = input().strip()
    vogais = "aeiou"
    
    seq_vogais = [c for c in s if c in vogais]
    
    if seq_vogais == seq_vogais[::-1]:
        print("S")
    else:
        print("N")

main()