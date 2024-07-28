def get_height():
    height = int(input("heigth: "))
    if height > 9 or height < 1:
        get_height()
    else:
        return height
def main():
    height = get_height()
    for i in range(height):
        print((' ' * (height - 1 - i)) + '#' * (1 + i) +
        " " + '#' * (1 + i))
main()