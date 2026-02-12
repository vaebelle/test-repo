#include <iostream>
using namespace std;

int add(int a, int b) {
  return a + b;
}

int multiply(int a, int b) {
  return a*b;
}

int divide(float a, float b) {
  return b/a;
}

int main() {
  cout << add(2, 3) << endl;
}