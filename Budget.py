def main():
    """A simple command-line based monthly budget tracker."""
    budget = {
        "income": {},
        "expenses": {}
    }
    
    while True:
        print("\n--- Monthly Budget Tracker ---")
        print("1. Add income")
        print("2. Add expense")
        print("3. View summary")
        print("4. Clear all data")
        print("5. Exit")
        
        choice = input("Enter your choice: ")
        
        if choice == '1':
            add_transaction(budget["income"], "income")
        elif choice == '2':
            add_transaction(budget["expenses"], "expense")
        elif choice == '3':
            view_summary(budget)
        elif choice == '4':
            clear_data(budget)
        elif choice == '5':
            print("Exiting budget tracker. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

def add_transaction(data, transaction_type):
    """
    Adds a new income or expense transaction to the budget.
    """
    category = input(f"Enter {transaction_type} category (e.g., Salary, Groceries): ")
    try:
        amount = float(input(f"Enter {transaction_type} amount: "))
        if amount <= 0:
            print("Amount must be a positive number.")
            return
        
        data[category] = data.get(category, 0) + amount
        print(f"{transaction_type.capitalize()} added successfully.")
    except ValueError:
        print("Invalid amount. Please enter a number.")

def view_summary(budget):
    """
    Displays the current budget summary.
    """
    total_income = sum(budget["income"].values())
    total_expenses = sum(budget["expenses"].values())
    remaining_balance = total_income - total_expenses
    
    print("\n--- Budget Summary ---")
    print(f"Total Income: ${total_income:.2f}")
    
    print("\nIncome Breakdown:")
    if budget["income"]:
        for category, amount in budget["income"].items():
            print(f"  - {category}: ${amount:.2f}")
    else:
        print("  No income recorded.")
    
    print(f"\nTotal Expenses: ${total_expenses:.2f}")
    
    print("Expense Breakdown:")
    if budget["expenses"]:
        for category, amount in budget["expenses"].items():
            print(f"  - {category}: ${amount:.2f}")
    else:
        print("  No expenses recorded.")
    
    print("\n----------------------")
    print(f"Remaining Balance: ${remaining_balance:.2f}")
    
    if remaining_balance >= 0:
        print("You are within budget. Great job!")
    else:
        print("You are over budget. Time to review your spending.")

def clear_data(budget):
    """
    Clears all income and expense data.
    """
    confirmation = input("Are you sure you want to clear all data? (yes/no): ").lower()
    if confirmation == 'yes':
        budget["income"].clear()
        budget["expenses"].clear()
        print("All budget data has been cleared.")
    else:
        print("Data clear canceled.")

if __name__ == "__main__":
    main()
