#include <iostream>

class Addition {
public:
  // Many forms or types of function Add based on no. and types of arguments
  void add(int a) { std::cout << "Sum : " << (a + a) << std::endl; }
  void add(int a, int b) { std::cout << "Sum : " << (a + b) << std::endl; }
  void add(int a, float b) {
    std::cout << "Sum : " << ((float)a + b) << std::endl;
  }
  void add(int a, int b, int c) {
    std::cout << "Sum : " << (a + b + c) << std::endl;
  }
  void add(int a, int b, int c, int d) {
    std::cout << "Sum : " << (a + b + c + d) << std::endl;
  }
};

int main() {
  Addition a;
  a.add(50);
  a.add(100, 200);
  a.add((float)343.545f, 354345.453f);
  a.add(435, 45345, 23423);
  a.add(float(24.1), float(24.2));
  exit(EXIT_SUCCESS);
}