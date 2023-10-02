#include <stdio.h>

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to check if a number is a Harshad number
int isHarshad(int num) {
    int sum = sumOfDigits(num);
    return (num % sum == 0);
}

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a Harshad number and print the result
    if (isHarshad(num))
        printf("%d is a Harshad number.\n", num);
    else
        printf("%d is not a Harshad number.\n", num);

    return 0;
}
