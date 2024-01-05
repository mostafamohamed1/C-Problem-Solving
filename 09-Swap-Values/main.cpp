#include <iostream>
#include <utility>

// std::pair<int, int> swap_values(std::pair<int, int> values)
// {
//   int temp = values.first;
//   values.first = values.second;
//   values.second = temp;
//   return values;
// }

std::pair<int, int> swap_values(std::pair<int, int> values)
{
  return {values.second, values.first};
}

int main()
{
  std::pair<int, int> vals = {10, 9};
  std::cout << vals.first << std::endl;
  std::cout << vals.second << std::endl;
  std::pair<int, int> swaped = swap_values(vals);
  std::cout << swaped.first << std::endl;
  std::cout << swaped.second << std::endl;
}