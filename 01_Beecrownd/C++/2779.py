n = int(input())
s = n
m = int(input())
l = []
for i in range(m):
    a = int(input())
    if a not in l:
        l.append(a)
        s-= 1

print(s)