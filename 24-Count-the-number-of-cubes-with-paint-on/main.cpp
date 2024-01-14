#include <iostream>

int countSquares(int cuts)
{
  return cuts != 0 ? cuts * cuts * 6 + 2 : 1;
}

int main()
{

  std::cout << countSquares(2) << std::endl;
  std::cout << countSquares(0) << std::endl;
  std::cout << countSquares(23) << std::endl;

  return 0;
}