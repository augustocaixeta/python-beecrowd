arr = [5, 4, 3, 2, 1]
len = len(arr) - 1

for steps in range(len):
    for i in range(len - steps):
        if arr[i] > arr[i+1]:
            arr[i], arr[i+1] = arr[i+1], arr[i]

print(arr)
