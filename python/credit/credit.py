number = input("Number:")

def main():
    if tam():
        return
    soma = luhn()
    if check(soma):
        return
    if (number[:2] == "34" or number[:2] == "37") and len(number) == 15:
        print("American Express")
    elif (number[:2] in ["51", "52", "53", "54", "55"]) and len(number) == 16:
        print("Mastercard")
    elif number[0] == "4" and len(number) in [13, 16]:
        print("Visa")
    else:
        print("invalid")

def tam():
    if len(number) < 12:
        print("invalid")
        return True
    return False

def luhn():
    total = 0
    reverse_digits = number[::-1]

    # Processando os dígitos em posições pares e ímpares
    for i, digit in enumerate(reverse_digits):
        n = int(digit)
        if i % 2 == 1:
            n *= 2
            if n > 9:
                n -= 9
        total += n

    return total

def check(soma):
    if soma % 10 != 0:
        print("invalid")
        return True
    return False

main()
