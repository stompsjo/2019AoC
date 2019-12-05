#include <fstream>
#include <math.h>
#include <iostream>
#include <vector>

int main() {

  std::ifstream input;
  input.open("data/data_d2.txt");
  int val = 0;
  std::vector<int> code;
  while (input >> val) {
    code.push_back(val);
  }

  code[1] = 12;
  code[2] = 2;

  int index = 0;
  while (index < code.size()) {
    if (code[index] == 1) {
      code[code[index+3]] = code[code[index+1]] + code[code[index+2]];
    } else if (code[index] == 2) {
      code[code[index+3]] = code[code[index+1]] * code[code[index+2]];
    } else if (code[index] == 99) {return 0;}

    index += 3;
  }

  std::cout << "The 1202 program alarm code is: " << code[0] << std::endl;

}
