n = int(input())
last = 1
count = 1

while (n):
    x = int(input())
    
    if (x != last):
        count += 1
    
    last = x
    n -= 1

print(count)

# https://judge.beecrowd.com/pt/problems/view/3048
