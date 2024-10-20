def number_spiral(x, y):
    n = max(y, x)
    
    if n % 2 != 0:
        if y == n:
            return n * n - (x - 1)
        else:
            return (n - 1) * (n - 1) + y
    else:
        if x == n:
            return n * n - (y - 1)
        else:
            return (n - 1) * (n - 1) + x

t = int(input())
for i in range(t):
    k = input()
    x = int(k[:k.find(" ")])
    y = int(k[k.find(" "):])
    #print(f"x : {x} , y : {y}")
    
    print(number_spiral(x, y))
