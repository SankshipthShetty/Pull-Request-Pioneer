def palindrome(string):
    new_string = ""
    for i in range(0, len(string)):
        new_string += str(string[len(string) - 1 - i])
    if string == new_string:
        return True
    else:
        return False

string = input("Enter a string: ")
if palindrome(string):
    print(string, "is a palindrome!")
else:
    print(string, "is not a palindrome!")    