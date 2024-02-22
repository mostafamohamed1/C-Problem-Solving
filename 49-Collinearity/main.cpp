#include <iostream>

bool collinearity(int x1, int y1, int x2, int y2)
{
  return (x1 * y2 - x2 * y1) == 0;
}
int main()
{

  std::cout << collinearity(0, 1, 6, 0) << std::endl;

  return 0;
}