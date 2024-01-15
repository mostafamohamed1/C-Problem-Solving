#include <iostream>
#include <iomanip>
#include <cmath>

double round_d(double var, int precision = 2)
{
  if (precision < 0)
    precision = 0;
  double value = (var >= 0) ? (int)(var * std::pow(10, precision) + .5) : (int)(var * std::pow(10, precision) - .5);
  return value / std::pow(10, precision);
}

double startingMark(double bodyHeight)
{

  return round_d(3.4681 + 3.93548 * bodyHeight);
}

int main()
{

  std::cout << startingMark(1.22) << std::endl;

  return 0;
}