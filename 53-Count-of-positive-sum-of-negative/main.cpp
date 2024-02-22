#include <iostream>
#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  int count = 0, sum = 0;
  for (auto item : input)
  {
    if (item > 0)
      count++;
    else
      sum += item;
  }
  return {count, sum};
}

int main()
{

  std::cout << countPositivesSumNegatives({1, 2, 3, 4, 5, -1, -2, -3, -4, -5, -6})[0] << std::endl;
  std::cout << countPositivesSumNegatives({1, 2, 3, 4, 5, -1, -2, -3, -4, -5, -6})[1] << std::endl;
}