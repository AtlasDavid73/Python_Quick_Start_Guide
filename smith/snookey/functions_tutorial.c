#include <stdio.h>
#include <math.h>

// 1. FUNCTION DECLARATION (Function Prototype)
// This tells the compiler about the function before it's used
int add(int a, int b);
void greetUser(char name[]);
float calculateArea(float radius);
int factorial(int n);
void swapValues(int *a, int *b);  // Function with pointers

// 2. SIMPLE FUNCTION - No parameters, no return value
void sayHello() {
    printf("Hello! Welcome to C Functions Tutorial!\n");
    printf("This function takes no parameters and returns nothing.\n\n");
}

// 3. FUNCTION WITH PARAMETERS - Takes input, no return value
void greetUser(char name[]) {
    printf("Hello, %s! Nice to meet you.\n", name);
    printf("This function takes a parameter but returns nothing.\n\n");
}

// 4. FUNCTION WITH RETURN VALUE - Takes input, returns output
int add(int a, int b) {
    printf("Adding %d + %d\n", a, b);
    return a + b;  // Returns the sum
}

// 5. FUNCTION WITH MULTIPLE PARAMETERS AND RETURN
float calculateArea(float radius) {
    printf("Calculating area of circle with radius %.2f\n", radius);
    float area = 3.14159 * radius * radius;
    return area;
}

// 6. RECURSIVE FUNCTION - Function that calls itself
int factorial(int n) {
    printf("Calculating factorial of %d\n", n);
    
    // Base case - stops the recursion
    if (n <= 1) {
        return 1;
    }
    
    // Recursive case - function calls itself
    return n * factorial(n - 1);
}

// 7. FUNCTION WITH POINTERS - Modifies original variables
void swapValues(int *a, int *b) {
    printf("Before swap: a = %d, b = %d\n", *a, *b);
    
    int temp = *a;
    *a = *b;
    *b = temp;
    
    printf("After swap: a = %d, b = %d\n", *a, *b);
}

// 8. FUNCTION WITH ARRAYS
void printArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 9. FUNCTION THAT RETURNS AN ARRAY (using static)
int* getNumbers() {
    static int numbers[] = {10, 20, 30, 40, 50};
    return numbers;
}

// 10. FUNCTION WITH DEFAULT BEHAVIOR (using variable arguments concept)
void printMessage(char message[], int repeat) {
    for (int i = 0; i < repeat; i++) {
        printf("%s\n", message);
    }
}

int main() {
    printf("=== C FUNCTIONS TUTORIAL ===\n\n");
    
    // 1. Calling a simple function
    printf("1. Simple Function (no parameters, no return):\n");
    sayHello();
    
    // 2. Function with parameters
    printf("2. Function with Parameters:\n");
    greetUser("David");
    
    // 3. Function with return value
    printf("3. Function with Return Value:\n");
    int sum = add(15, 25);
    printf("Result: %d\n\n", sum);
    
    // 4. Function with multiple parameters and return
    printf("4. Function with Multiple Parameters:\n");
    float area = calculateArea(5.0);
    printf("Area: %.2f\n\n", area);
    
    // 5. Recursive function
    printf("5. Recursive Function:\n");
    int fact = factorial(5);
    printf("5! = %d\n\n", fact);
    
    // 6. Function with pointers
    printf("6. Function with Pointers (Pass by Reference):\n");
    int x = 10, y = 20;
    printf("Original: x = %d, y = %d\n", x, y);
    swapValues(&x, &y);
    printf("After function call: x = %d, y = %d\n\n", x, y);
    
    // 7. Function with arrays
    printf("7. Function with Arrays:\n");
    int numbers[] = {1, 2, 3, 4, 5};
    printArray(numbers, 5);
    printf("\n");
    
    // 8. Function returning array
    printf("8. Function Returning Array:\n");
    int* returnedArray = getNumbers();
    printf("Returned array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", returnedArray[i]);
    }
    printf("\n\n");
    
    // 9. Function with repeated calls
    printf("9. Function with Repeated Execution:\n");
    printMessage("Learning C is fun!", 3);
    printf("\n");
    
    // 10. Demonstrating function scope
    printf("10. Local vs Global Scope:\n");
    printf("Variables declared inside functions are local to that function.\n");
    printf("They cannot be accessed outside the function.\n\n");
    
    // 11. Math library functions (built-in functions)
    printf("11. Using Built-in Functions (Math Library):\n");
    printf("Square root of 16: %.2f\n", sqrt(16));
    printf("2 raised to power 3: %.2f\n", pow(2, 3));
    printf("Absolute value of -10: %.2f\n", fabs(-10));
    printf("\n");
    
    printf("=== KEY CONCEPTS LEARNED ===\n");
    printf("✓ Function declaration and definition\n");
    printf("✓ Parameters and arguments\n");
    printf("✓ Return values\n");
    printf("✓ Void functions\n");
    printf("✓ Recursive functions\n");
    printf("✓ Pass by value vs pass by reference (pointers)\n");
    printf("✓ Functions with arrays\n");
    printf("✓ Local and global scope\n");
    printf("✓ Built-in library functions\n");
    
    return 0;
}