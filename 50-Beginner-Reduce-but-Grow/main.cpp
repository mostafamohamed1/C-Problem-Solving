#include <iostream>
#include <vector>
#include <numeric>
int grow(std::vector<int> nums)
{
  return std::accumulate(nums.begin(), nums.end(), 1, std::multiplies<int>());
}

int main()
{
  std::cout << grow({1, 2, 3, 4}) << std::endl;
}