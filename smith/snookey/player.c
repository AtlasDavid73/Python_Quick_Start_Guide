/*****************************************************************************
 ******************************************************************************
 **** fish_tank.c    2 May 2024 by User Input                             ***
 ****                                                                      ***
 **** Description: compute the amount of water needed to fill a fish tank. ***
 **** Note: there are 231 cubic inches in 1 gallon.                       ***
 **** Input: length to the nearest 0.5 inches                             ***
 ****        width to the nearest 0.5 inches                              ***
 ****        height to the nearest 0.5 inches                             ***
 **** Output: 1) print the user input values length, width, height to     ***
 ****             half an inch or 1 decimal place resolution              ***
 ****         2) print the cubic inches of volume computed                ***
 ****         3) finally, print the number of gallons needed to 2 places. ***
 ******************************************************************************
 ******************************************************************************/

#include <stdio.h>
#include <math.h>  // Added this header for round() function

int main(void)
{
    float length, width, height;
    float volume_cubic_inches, amount_in_gallons;
    
    printf("Enter the length of the fish tank (to the nearest half inch): ");
    scanf("%f", &length);
    
    printf("Enter the width of the fish tank (to the nearest half inch): ");
    scanf("%f", &width);
    
    printf("Enter the height of the fish tank (to the nearest half inch): ");
    scanf("%f", &height);
    
    // Calculate volume in cubic inches
    volume_cubic_inches = length * width * height;
    
    // Convert volume to gallons using the known 231 cubic inches in a gallon
    amount_in_gallons = volume_cubic_inches / 231;
    
    // Repeat the user's input and display the volume in inches
    printf("The volume of a fish tank having length = %.1f width = %.1f and height = %.1f is %.2f cubic inches\n", 
           length, width, height, volume_cubic_inches);
    
    // Display the amount of gallons - FIXED: Added missing comma
    printf("The amount of water needed to fill the fish tank = %.2f gallons\n", amount_in_gallons);
    
    // Display the result of the round() math.h function
    printf("The amount of water needed using the round function = %.2f gallons\n", round(amount_in_gallons));
    
    return 0;
}