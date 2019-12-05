#include <fstream>
#include <math.h>
#include <iostream>

int main() {
  std::ifstream input;
  input.open("data.txt");

  double mass = 0;
  int total = 0;
  while (input >> mass) {
    total += floor(mass / 3) - 2;
  }

  std::cout << "The total fuel requirement is: " << total << std::endl;
}
