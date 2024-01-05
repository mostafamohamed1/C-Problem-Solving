#include <iostream>
#include <utility>

std::pair<int, int> symmetricPoint(const std::pair<int, int> &p,
                                   const std::pair<int, int> &q)
{
  return {-(p.first - q.first * 2), -(p.second - q.second * 2)};
}

int main()
{

  std::cout << symmetricPoint({0, 0}, {1, 1}).first << " " << symmetricPoint({0, 0}, {1, 1}).second << std::endl;
  std::cout << symmetricPoint({2, 6}, {-2, -6}).first << " " << symmetricPoint({2, 6}, {-2, -6}).second << std::endl;
  std::cout << symmetricPoint({10, -10}, {-10, 10}).first << " " << symmetricPoint({10, -10}, {-10, 10}).second << std::endl;
  std::cout << symmetricPoint({1, -35}, {-12, 1}).first << " " << symmetricPoint({1, -35}, {-12, 1}).second << std::endl;

  return 0;
}