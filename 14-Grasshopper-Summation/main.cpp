#include <iostream>

int summation(int num)
{
  return num * (num + 1) / 2;
}

int main()
{
  std::cout << summation(2) << std::endl;
  std::cout << summation(8) << std::endl;
}