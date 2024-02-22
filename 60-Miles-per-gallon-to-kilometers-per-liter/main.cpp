#include <iostream>
#include <cmath>

double converter(int mpg)
{
  return std::round((mpg / (4.54609188 / 1.609344)) * 100.00) / 100.00;
}

int main()
{

  std::cout << converter(36) << std::endl;

  return 0;
}