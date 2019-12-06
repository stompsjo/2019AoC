#include <fstream>
#include <math.h>
#include <iostream>
#include <vector>
#include <ctype.h>
#include <string>

int main() {

  std::ifstream input;
  input.open("data/data_d2.txt");
  std::string val;
  std::vector<int> code;
  while (!input.eof()) {
    std::getline(input, val, ',');

    code.push_back(std::stoi(val));
  }

  code[1] = 12;
  code[2] = 2;

  int index = 0;
  while (index <= code.size()) {
    std::cout << "This index : " << index << std::endl;
    if (code[index] == 1) {
      code[code[index+3]] = code[code[index+1]] + code[code[index+2]];
      index += 3;
    } else if (code[index] == 2) {
      code[code[index+3]] = code[code[index+1]] * code[code[index+2]];
      index += 3;
    } else if (code[index] == 99) {
      std::cout << "The 1202 program alarm code is: " << code[0] << std::endl;
      return 0;
    } else index++;
  }

  std::cout << "The 1202 program alarm code is: " << code[0] << std::endl;

}
