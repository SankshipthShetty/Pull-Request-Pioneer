def radix_sort(arr):
    # Find the maximum number to know the number of digits
    max_num = max(arr)
    exp = 1

    # Loop through each digit place (ones, tens, hundreds, etc.)
    while max_num // exp > 0:
        counting_sort(arr, exp)
        exp *= 10

def counting_sort(arr, exp):
    n = len(arr)
    output = [0] * n
    count = [0] * 10

    # Count the occurrences of each digit at the current place value
    for i in range(n):
        index = (arr[i] // exp) % 10
        count[index] += 1

    # Calculate the cumulative count
    for i in range(1, 10):
        count[i] += count[i - 1]

    # Build the output array by placing elements in their correct position
    i = n - 1
    while i >= 0:
        index = (arr[i] // exp) % 10
        output[count[index] - 1] = arr[i]
        count[index] -= 1
        i -= 1

    # Copy the sorted elements back to the original array
    for i in range(n):
        arr[i] = output[i]

arr = [170, 45, 75, 90, 802, 24, 2, 66]

radix_sort(arr)

print("Sorted array: ", arr)
