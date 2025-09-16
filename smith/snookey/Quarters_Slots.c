/*****************************************************************************
 **** slot_machine.c - Simple Slot Machine Game                          ***
 ****                                                                     ***
 **** Description: A quarters-based slot machine simulator                ***
 **** Starting balance: $20 (80 quarters)                                ***
 **** Win conditions based on random number 1-100:                       ***
 ****   1-49:  Lose bet                                                   ***
 ****   50-74: Get bet back                                               ***
 ****   75-94: Double bet                                                 ***
 ****   95-100: Triple bet (JACKPOT!)                                     ***
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // Initialize variables
    int quarters = 80;  // $20 worth of quarters (80 quarters)
    int bet;
    int spin_result;
    int winnings;
    
    // Seed the random number generator
    srand(time(NULL));
    
    printf("=== WELCOME TO THE SLOT MACHINE ===\n");
    printf("You start with $20.00 (80 quarters)\n");
    printf("Enter 0 to cash out at any time.\n\n");
    
    // Main game loop
    while (quarters > 0) {
        // Display current balance
        printf("Current balance: %d quarters ($%.2f)\n", quarters, quarters * 0.25);
        
        // Get player's bet
        printf("Enter number of quarters to bet (0 to cash out): ");
        scanf("%d", &bet);
        
        // Check if player wants to cash out
        if (bet == 0) {
            printf("\n=== CASHING OUT ===\n");
            printf("Final balance: %d quarters ($%.2f)\n", quarters, quarters * 0.25);
            printf("Thanks for playing!\n");
            break;
        }
        
        // Validate bet amount
        if (bet < 0) {
            printf("Invalid bet! Please enter a positive number.\n\n");
            continue;
        }
        
        if (bet > quarters) {
            printf("Insufficient funds! You only have %d quarters.\n\n", quarters);
            continue;
        }
        
        // Deduct bet from balance
        quarters -= bet;
        
        // Generate random spin result (1-100)
        spin_result = (rand() % 100) + 1;
        
        printf("\nSpinning... ");
        printf("Result: %d\n", spin_result);
        
        // Determine outcome and calculate winnings
        if (spin_result < 50) {
            // Lose bet
            winnings = 0;
            printf("Sorry! You lost your bet of %d quarters.\n", bet);
        }
        else if (spin_result >= 50 && spin_result <= 74) {
            // Get bet back
            winnings = bet;
            printf("Push! You get your %d quarters back.\n", bet);
        }
        else if (spin_result >= 75 && spin_result <= 94) {
            // Double bet
            winnings = bet * 2;
            printf("Winner! You doubled your bet and won %d quarters!\n", winnings);
        }
        else { // spin_result >= 95 && spin_result <= 100
            // Triple bet (Jackpot)
            winnings = bet * 3;
            printf("🎰 JACKPOT! 🎰 You tripled your bet and won %d quarters!\n", winnings);
        }
        
        // Update balance with winnings
        quarters += winnings;
        
        // Show net result for this spin
        int net_result = winnings - bet;
        if (net_result > 0) {
            printf("You gained %d quarters this spin!\n", net_result);
        } else if (net_result < 0) {
            printf("You lost %d quarters this spin.\n", abs(net_result));
        } else {
            printf("No change in balance this spin.\n");
        }
        
        printf("\n");
        
        // Check if player is out of money
        if (quarters == 0) {
            printf("=== GAME OVER ===\n");
            printf("You're out of quarters! Better luck next time.\n");
            break;
        }
    }
    
    return 0;
}