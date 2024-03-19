#include <iostream>
#include <variant>
#include <vector>

std::vector<std::variant<int, std::string>> fizzBuzz() {
  std::vector<std::variant<int, std::string>> values;

  // Your code here
  // Loop through the numbers 1 to 100
  // To add an item to the list, use `values.emplace_back(item);`

  return values;
}

int main() {
  std::vector<std::variant<int, std::string>> correctValues = {
      1,  2,  "Fizz", 4,  "Buzz", "Fizz", 7,  8,  "Fizz", "Buzz", 11, "Fizz", 13, 14, "FizzBuzz",
      16, 17, "Fizz", 19, "Buzz", "Fizz", 22, 23, "Fizz", "Buzz", 26, "Fizz", 28, 29, "FizzBuzz",
      31, 32, "Fizz", 34, "Buzz", "Fizz", 37, 38, "Fizz", "Buzz", 41, "Fizz", 43, 44, "FizzBuzz",
      46, 47, "Fizz", 49, "Buzz", "Fizz", 52, 53, "Fizz", "Buzz", 56, "Fizz", 58, 59, "FizzBuzz",
      61, 62, "Fizz", 64, "Buzz", "Fizz", 67, 68, "Fizz", "Buzz", 71, "Fizz", 73, 74, "FizzBuzz",
      76, 77, "Fizz", 79, "Buzz", "Fizz", 82, 83, "Fizz", "Buzz", 86, "Fizz", 88, 89, "FizzBuzz",
      91, 92, "Fizz", 94, "Buzz", "Fizz", 97, 98, "Fizz", "Buzz"};
  std::vector<std::variant<int, std::string>> givenValues = fizzBuzz();

  if (correctValues.size() != givenValues.size()) {
    std::cout << "Test failed" << std::endl
              << "Expected " << correctValues.size() << " items | Got: " << givenValues.size()
              << std::endl;
    return 1;
  }

  for (size_t i = 0; i < correctValues.size(); i++)
    if (correctValues[i] != givenValues[i]) {
      std::cout << i << ") Test failed" << std::endl
                << "Expected: " << correctValues[i].index() << " | Got: " << givenValues[i].index()
                << std::endl;
      return 1;
    }

  std::cout << "Test passed!" << std::endl;
  return 0;
}