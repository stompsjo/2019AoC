#include <fstream>
#include <math.h>
#include <iostream>

int main() {
  std::ifstream input;
  input.open("data/data_d1.txt");

  double mass = 0;
  int total = 0;
  double fuel_needed = 0;
  while (input >> mass) {
    while (mass > 0) {
      fuel_needed = floor(mass / 3) - 2;
      if (fuel_needed > 0) {
        total += fuel_needed;
      }
      mass = fuel_needed;
    }
  }

  std::cout << "The total fuel requirement is: " << total << std::endl;
}
