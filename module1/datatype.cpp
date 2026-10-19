#include <iostream>

int main() {

  // Integer (whole number)

  int age = 21;
  int price = 50.7;

  // Double (decimal numbers)
  double mrp = 50.7;

  // Boolean (bool : true/false)
  bool student = true;

  // char (only isngle character)
  char letter = 'Q';
  // char letter = "Q";
  // char alphabet = "Quant";

  // string
  std::string role = "Quant";
  // string  role2 = "Quant";

  std::cout << "You're a " << age << " year old " << role << "\n";
  std::cout << "price : " << price << " mrp : " << mrp
            << " Is the student enrolled : " << student
            << " letter : " << letter << std::endl;

  return 0;
}
