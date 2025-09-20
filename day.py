# Easy Python Code for Beginners

# 1. Print messages
print("Welcome to Python!")
print("This is easy!")

# 2. Simple math
print(2 + 3)
print(10 - 4)
print(5 * 6)
print(20 / 4)

# 3. Store things in variables
name = "John"
age = 20
print(name)
print(age)

# 4. Put variables together
print("My name is " + name)
print("I am", age, "years old")

# 5. Ask user for input
user_name = input("What's your name? ")
print("Hi " + user_name + "!")

# 6. Simple if statement
number = 15
if number > 10:
    print("Big number!")
else:
    print("Small number!")

# 7. Count with a loop
for i in range(5):
    print("Count:", i)

# 8. Work with a list
colors = ["red", "blue", "green"]
print(colors[0])  # First color
print(colors[1])  # Second color

# 9. Add to the list
colors.append("yellow")
print(colors)

# 10. Simple function
def say_hello():
    print("Hello there!")

say_hello()

# 11. Function with input
def greet_person(name):
    print("Hello", name)

greet_person("Alice")
greet_person("Bob")

# 12. Function that returns something
def add_numbers(a, b):
    return a + b

result = add_numbers(5, 3)
print("5 + 3 =", result)

# 13. Check if something is in a list
pets = ["dog", "cat", "fish"]
if "dog" in pets:
    print("We have a dog!")

# 14. Simple while loop
count = 0
while count < 3:
    print("Count is", count)
    count = count + 1

# 15. Work with strings
message = "Python is fun"
print(message.upper())  # PYTHON IS FUN
print(message.lower())  # python is fun
print(len(message))     # Length of string

# 16. Simple calculator
num1 = 10
num2 = 5
print("Addition:", num1 + num2)
print("Subtraction:", num1 - num2)
print("Multiplication:", num1 * num2)
print("Division:", num1 / num2)

print("Done! Python is easy!")