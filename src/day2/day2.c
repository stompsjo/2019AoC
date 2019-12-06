#include <fstream>
#include <math.h>
#include <iostream>
#include <vector>
#include <ctype.h>
#include <string>
#include <algorithm>

int parse(std::vector<int> code, int noun, int verb) {
  code[1] = noun;
  code[2] = verb;

  int index = 0;
  while (index <= code.size()) {
    if (code[index] == 1) {
      code[code[index+3]] = code[code[index+1]] + code[code[index+2]];
      index += 3;
    } else if (code[index] == 2) {
      code[code[index+3]] = code[code[index+1]] * code[code[index+2]];
      index += 3;
    } else if (code[index] == 99) {
      return code[0];
      return 0;
    } else index++;
  }

  return code[0];
}

int main() {

  std::ifstream input;
  input.open("data/data_d2.txt");
  std::string val;
  std::vector<int> code;
  while (!input.eof()) {
    std::getline(input, val, ',');

    code.push_back(std::stoi(val));
  }

  int result = 0;
  for (int noun = 0; noun < 99; noun++) {
    for (int verb = 0; verb < 99; verb++) {
        result = parse(code, noun, verb);
        if (result == 19690720) {
          std::cout << "noun : " << noun << std::endl;
          std::cout << "verb : " << verb << std::endl;
          std::cout << "100 * noun + verb : " << 100 * noun + verb << std::endl;
          return 0;
        }
    }
  }

  std::cout << "Inputs not found." << std::endl;

  input.close();
}
