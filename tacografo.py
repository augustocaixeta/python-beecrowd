n = int(input())
r = 0

while (n):
    a, b = map(int, input().split())
    r += a * b
    n -= 1

print(r)

# https://judge.beecrowd.com/pt/problems/view/2388
