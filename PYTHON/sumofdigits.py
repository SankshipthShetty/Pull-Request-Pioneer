def sum_of_digits(num):
    sum = 0
    for ch in str(num):
        sum += int(ch)
    return sum

num = input("Enter a number: ")
print("The sum of the digits", num, "is", sum_of_digits(num))