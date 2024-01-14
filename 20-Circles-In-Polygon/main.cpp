#include <iostream>
#include <cmath>

#define PI 3.14159265

double circle_diameter(unsigned int sides, unsigned int side_length)
{
  return side_length * 1 / tan(PI / sides);
}

int main()
{

  std::cout << circle_diameter(4, 5) << std::endl;
  return 0;
}