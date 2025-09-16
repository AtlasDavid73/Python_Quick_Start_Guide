#include <stdio.h>

int main() {
    float base, height, area;

    // Ask user for input
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate area
    area = 0.5 * base * height;

    // Display result
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
