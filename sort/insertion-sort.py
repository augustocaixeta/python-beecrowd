def shift(arr, start):
    val = arr[start]
    idx = start
    
    for i in range(start - 1, -1, -1):
        if arr[i] <= val:
            break

        arr[i+1] = arr[i]
        idx = i

    arr[idx] = val

def insertion_sort(arr):
    n = len(arr)
    for i in range(n):
        shift(arr, i)

arr = [6, 7, 9, 4, 3, 0]
insertion_sort(arr)
print(arr)

# ...
arr = [6, 7, 9, 4, 3, 0]
n = len(arr)

for i in range(n):
    val = arr[i]
    idx = i - 1
    while idx >= 0 and arr[idx] > val:
        arr[idx + 1] = arr[idx]
        idx -= 1
    arr[idx + 1] = val

print(arr)
