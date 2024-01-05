#include <iostream>
#include <string>

std::string integrate(int coefficient, int exponent)
{
  return std::to_string(coefficient / (++exponent)) + "x^" + std::to_string(exponent + 1);
}

int main()
{
  std::cout << integrate(3, 2) << std::endl;
  return 0;
}