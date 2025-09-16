#include <stdio.h>

// Function to calculate remainder using modulo operator
int getRemainder(int dividend, int divisor) {
    return dividend % divisor;
}

int main() {
    int num1, num2, remainder;
    
    // Get input from user
    printf("Enter first number (dividend): ");
    scanf("%d", &num1);
    
    printf("Enter second number (divisor): ");
    scanf("%d", &num2);
    
    // Check for division by zero
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed!\n");
        return 1;
    }
    
    // Calculate remainder using modulo operator
    remainder = getRemainder(num1, num2);
    
    // Display result
    printf("Remainder of %d %% %d = %d\n", num1, num2, remainder);
    
    return 0;
}