#include <iostream>

int main() {
  // The first numbers in the sequence
  int a;
  int b;

  // The next number in the sequence
  int c;

  // Number of terms to calculate
  int n = -1;

  // If the user is done (start with false)
  bool quit = false;
  // If the user wants to start over
  bool startOver = true;

  // Loop until the user is done
  while (!quit) {
    // If the user wants to start over, reset the first numbers in the sequence
    if (startOver) {
      // Reset the first numbers in the sequence
      a = 0;
      b = 1;
      startOver = false;
    }

    // Get the number of terms to calculate
    std::cout << "Enter the number of terms to calculate: ";
    std::cin >> n;

    // Calculate the first n numbers of the Fibonacci sequence
    for (int i = 0; i < n; i++) {
      std::cout << "Fibonacci number " << i + 1 << ": " << b << std::endl;
      c = a + b;
      a = b;
      b = c;
    }
    std::cout << std::endl;

    // Ask the user what they want to do next
    char response;
    std::cout << "S ) Start over" << std::endl;
    std::cout << "C ) Calculate more terms" << std::endl;
    std::cout << "Q ) Quit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> response;

    // Check the user's response
    if ((response == 's') || (response == 'S')) {
      startOver = true;
    } else if ((response == 'q') || (response == 'Q')) {
      quit = true;
    }
    std::cout << std::endl;
  }

  std::cout << "Goodbye!" << std::endl;
  return 0;
}
