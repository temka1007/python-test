#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string myString = "This is some mixed case string.";
  for (char &c : myString) {
    if (c == 'i') {
      c = '1';
    }
  }
  std::cout << myString << std::endl;
  int number = 10;
  while (number > 0) {
    if (number % 2 == 0) {
      std::cout << "Even number: " << number << std::endl;
    } else {
      std::cout << "Odd number: " << number << std::endl;
    }
    number--;
  }
  return 0;
}