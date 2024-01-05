#include <vector>
#include <iostream>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints)
{

  int res = 0;
  for (int a : classPoints)
    res += a;

  return res / classPoints.size() >= yourPoints ? false : true;
}

int main()
{
  int yourPoints = 50;
  std::vector<int> vec{41, 75, 72, 56, 80, 82, 81, 33};

  std::cout << betterThanAverage(vec, yourPoints) << std::endl;

  return 0;
}