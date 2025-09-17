import random

def rock_paper_scissors():
    options = ["rock", "paper", "scissors"]

    print("Welcome to Rock, Paper, Scissors!")
    print("Type 'quit' to stop playing.\n")

    while True:
        user_choice = input("Choose rock, paper, or scissors: ").lower()

        if user_choice == "quit":
            print("Thanks for playing!")
            break

        if user_choice not in options:
            print("Invalid choice. Try again.\n")
            continue

        computer_choice = random.choice(options)
        print(f"Computer chose: {computer_choice}")

        if user_choice == computer_choice:
            print("It's a tie!\n")
        elif (user_choice == "rock" and computer_choice == "scissors") \
             or (user_choice == "scissors" and computer_choice == "paper") \
             or (user_choice == "paper" and computer_choice == "rock"):
            print("You win!\n")
        else:
            print("You lose!\n")

# Run the game
rock_paper_scissors()

