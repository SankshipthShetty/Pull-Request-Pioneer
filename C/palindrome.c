#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum, reversedNum = 0, remainder;

    originalNum = num;

    // Reversing the number
    while (originalNum != 0) {
        remainder = originalNum % 10;
        reversedNum = reversedNum * 10 + remainder;
        originalNum /= 10;
    }

    // Checking if the reversed number is equal to the original number
    if (reversedNum == num)
        return 1; // True, it's a palindrome
    else
        return 0; // False, it's not a palindrome
}

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a palindrome and print the result
    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}
