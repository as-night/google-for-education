// hello.cc: as-night
// Description: a program that prints the immortal saying "hello world"

#include <iostream>
#include <string>

int main() {
  // std::cout << "Hello World!" << '\n';
  // return 0;

  // Check, whether we really cout in a field of 17 spaces.
  // std::string s = "     Hello World!";
  // std::cout << "s length: " << (int)s.size() << '\n';

  for (int i = 0; i < 6; ++i) {
    for (int j = 0; j < 4; ++j) {
      std::cout << "     Hello World!";
    }
    std::cout << '\n';
  }
  std::cout << '\n';
}
