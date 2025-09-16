#include <stdio.h>

// Function to return sum of odd numbers up to n
int sumOddNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i += 2) {  // loop through odd numbers only
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    
    printf("Enter an odd number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number!\n");
    } else {
        int result = sumOddNumbers(n);
        printf("The sum of odd numbers up to %d is: %d\n", n, result);
    }

    return 0;
}
