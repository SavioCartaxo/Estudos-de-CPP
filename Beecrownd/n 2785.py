n = int(input())
s = 0
m = []
for i in range(n):
    m.append(list(map(int, input().split())))

t = 0
while (len(m[0]) > 0):
    lm = []
    for c in range(len(m[0])):
        sc = 0
        for l in range(t, n):
            sc += m[l][c]
       
        lm.append(sc)

    
    menor = min(lm)
    im = lm.index(menor)

    s += menor
    for i in range(n):
        m[i].pop(im)
    t += 1

print(s)