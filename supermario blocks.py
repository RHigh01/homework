while True:
    try:
        n = int(input("Height: "))
    except ValueError:
        continue
    if 1 <= n <= 8:
        for i in range(n+1):
            print(" " * (n - i), "#" * i,"  ", "#" * i)
    else:
        continue