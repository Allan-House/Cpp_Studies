#include <iostream>
#include <string>

int main() {
  std::cout << "Welcome to Letter Pyramid!" << std::endl;
  
  std::cout << "Enter a string: ";
  std::string input;
  std::getline(std::cin, input);

  if (input.empty()) {
    std::cout << "Empty string entered." << std::endl;
    return 0;
  }

  size_t length = input.length();

  for (size_t i = 0; i  < length; i++) {
    size_t spaces = length - i - 1;

    // Print leading spaces
    for (size_t j = 0; j < spaces; j++) {
      std::cout << " ";
    }

    // Print ascending part
    for (size_t j = 0; j <= i; j++) {
      std::cout << input.at(j);
    }

    // Print descending part
  for (size_t j = i; j > 0; j--) {
    std::cout << input.at(j - 1);
  }

    std::cout << std::endl;
  }

  return 0;
}