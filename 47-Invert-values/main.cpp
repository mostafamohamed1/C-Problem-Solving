#include <vector>
#include <iostream>

std::vector<int> invert(std::vector<int> values)
{
  for (int i = 0; i < values.size(); i++)
  {
    values.at(i) = values.at(i) * -1;
  }
  return values;
}

int main()
{

  for (auto i : invert({1, 2, -1, -3, 1, 2}))
    std::cout << i << " ";

  return 0;
}