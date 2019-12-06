#include <fstream>
#include <math.h>
#include <iostream>

int main() {
  // Pull data file
  std::ifstream input;
  input.open("data/data_d1.txt");

  double mass = 0;
  int total = 0;
  double fuel_needed = 0;

  // Parse through each number in data
  while (input >> mass) {
    // Compute fuel requirement for mass
    // and fuel requirement for fuel requirement mass
    while (mass > 0) {
      // Procedure for calculating fuel requirement
      fuel_needed = floor(mass / 3) - 2;
      if (fuel_needed > 0) {
        total += fuel_needed; // Tally fuel
      }
      // Calculate fuel needed for fuel needed
      mass = fuel_needed;
    }
  }

  // Print total fuel needed
  std::cout << "The total fuel requirement is: " << total << std::endl;
}
