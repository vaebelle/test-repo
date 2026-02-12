#include <iostream>
using namespace std;

int add(int a, int b) 
{
  return a + b + 28;
}

int multiply(int a, int b) 
{
  return a*b;
}

int divide(float a, float b) 
{
  return b/a;
}

int subtract(int a, int b) 
{
  return a - b;
}

int main() 
{
  cout << "basic operation algorithms" << endl;

  cout << "addition" << add(2, 3) << endl;
  cout << "multiplication" << multiply(5, 10) << endl;
  cout << "division" << divide(4, 40) << endl;
  cout << "subtration" << subtract(100 - 20) << endl;
}