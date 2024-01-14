#include <iostream>

int quadrant(int x, int y)
{
  return x > 0 ? (y > 0 ? 1 : 4) : (y > 0 ? 2 : 3);
}

int main()
{

  std::cout << quadrant(1, 2) << std::endl;
  std::cout << quadrant(3, 5) << std::endl;
  std::cout << quadrant(-10, 100) << std::endl;
  std::cout << quadrant(-1, -9) << std::endl;
  std::cout << quadrant(19, -56) << std::endl;

  return 0;
}