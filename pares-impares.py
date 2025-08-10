pa = []
im = []

n = int(input())
while n:
    value = int(input())
    if value % 2 == 0:
        pa.append(value)
    else:
        im.append(value)
    n -= 1

pa.sort()
im.sort(reverse=True)

for p in pa:
    print(p)

for i in im:
    print(i)
