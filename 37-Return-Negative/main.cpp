#include <iostream>

int returnNegative(int num)
{
  return num > 0 ? -num : num;
}

int main()
{
  std::cout << returnNegative(0) << std::endl;

  return 0;
}