function factorial(num) {
    if (num === 0 || num === 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

// Taking input from the user
let number = prompt("Enter a non-negative integer to calculate its factorial:");
number = parseInt(number);

// Checking if the input is a non-negative integer
if (!isNaN(number) && number >= 0) {
    // Calculating and displaying the factorial
    let result = factorial(number);
    console.log(`The factorial of ${number} is: ${result}`);
} else {
    console.log("Invalid input. Please enter a non-negative integer.");
}
