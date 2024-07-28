def get_cash():
            cash = float(input("Change owed: "))
            if cash > 0:
                return cash
            else:
                print("Please enter a positive number.")
                get_cash()
def main():
    cash = get_cash()
    coin = 0
    coins = [0.25, 0.1, 0.05, 0.01]

    for c in coins:
        while cash >= c:
            cash -= c
            cash = round(cash, 3)
            coin += 1
            print(f"Change owed: {cash}")

    print(f"coins: {coin}")

main()
