#include <iostream>
#include <vector>

int positive_sum(const std::vector<int> arr)
{
  int sum = 0;
  for (auto i : arr)
    if (i > 0)
      sum += i;
  return sum;
}

int main()
{
  std::cout << positive_sum(std::vector<int>{-1, 2, 3, 4, -5}) << std::endl;

  return 0;
}