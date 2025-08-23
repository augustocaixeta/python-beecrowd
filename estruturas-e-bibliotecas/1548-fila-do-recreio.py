n = int(input())

while n:
    m = int(input())
    arr = list(map(int, input().split()))
    oth = arr[:]

    arr.sort(reverse=True)
    unch = sum(1 for i in range(m) if arr[i] == oth[i])

    print(unch)
    n -= 1

# https://judge.beecrowd.com/pt/problems/view/1548
