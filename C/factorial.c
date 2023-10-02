#include <stdio.h>

int main() {
    int num, fact = 1;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= num; ++i) {
            fact *= i;
        }

        // Print the result
        printf("Factorial of %d = %d\n", num, fact);
    }

    return 0;
}

