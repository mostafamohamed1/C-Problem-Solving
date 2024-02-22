#include <iostream>
#include <vector>

std::vector<int> maps(std::vector<int> values)
{
  for (int i = 0; i < values.size(); i++)
  {
    values.at(i) = (values.at(i) * 2);
  }
  return values;
}

int main(int argc, char *argv[])
{
  for (auto i : maps({1, 2, 3}))
    std::cout << i << std::endl;

  return 0;
}