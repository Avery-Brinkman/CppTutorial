#include <iostream>

int main() {
  // Create our variables
  int firstNumber = 0;
  int secondNumber = 0;
  int result = 0;
  char operation = ' ';

  // Ask the user for the first number
  std::cout << "Enter the first number: ";
  // Get the user input and store it in firstNumber
  std::cin >> firstNumber;

  // Ask the user for the operation
  std::cout << "Enter the operation: ";
  // Get the user input and store it in operation
  std::cin >> operation;

  // Ask the user for the second number
  std::cout << "Enter the second number: ";
  // Get the user input and store it in secondNumber
  std::cin >> secondNumber;

  // Check what operation the user wants to do

  // If the operation is '+'
  if (operation == '+') {
    // Add the two numbers
    result = firstNumber + secondNumber;
  }
  // If not, check if the operation is '-'
  else if (operation == '-') {
    // Subtract the two numbers
    result = firstNumber - secondNumber;
  }
  // If not, check if the operation is '*'
  else if (operation == '*') {
    // Multiply the two numbers
    result = firstNumber * secondNumber;
  }
  // If not, check if the operation is '/'
  else if (operation == '/') {
    // Divide the two numbers
    result = firstNumber / secondNumber;
  }
  // If it was none of the above operations
  else {
    // Output an error message
    std::cout << "Invalid operation" << std::endl;
    // Return 1 to indicate an error
    // No code after this line will be executed
    return 1;
  }

  // Output the result
  std::cout << firstNumber << " " << operation << " " << secondNumber << " = " << result
            << std::endl;

  return 0;
}
