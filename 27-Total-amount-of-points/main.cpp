#include <iostream>
#include <array>
#include <string>
#include <sstream>
#include <cstdio>

// int points(const std::array<std::string, 10> &games)
// {
//   int res = 0;
//   for (const std::string &g : games)
//     res += g[0] > g[2] ? 3 : g[0] == g[2] ? 1
//                                           : 0;
//   return res;
// }

int points(const std::array<std::string, 10> &games)
{
  int rst = 0;
  for (size_t i = 0; i < games.size(); i++)
  {
    std::stringstream strX, strY;
    strX << games[i].at(0);
    strY << games[i].at(2);
    int x, y;
    strX >> x;
    strY >> y;
    if (x > y)
      rst += 3;
    if (x < y)
      rst += 0;
    if (x == y)
      rst += 1;
  }

  return rst;
}

int main()
{

  std::cout << points(std::array<std::string, 10>{"1:0", "2:0", "3:0", "4:0", "2:1", "3:1", "4:1", "3:2", "4:2", "4:3"}) << std::endl;

  std::cout << "============= Test Conversion ============" << std::endl;

  std::string L = "1:2";
  int x, y;
  sscanf(L.c_str(), "%d:%d", &x, &y);
  std::cout << x << " " << y << std::endl;

  return 0;
}
