n, c, m = map(int, input().split())

lc = list(map(int, input().split()))

lf = map(int, input().split())

for it in lf:
    if it in lc:
        lc.remove(it)
        c -= 1

print(c)