#include <iostream>
#include <vector>

int sum(std::vector<int> nums)
{
  if (!nums.size())
    return 0;
  if (nums.size() == 1)
    return nums[0];
  int ret = 0;
  for (auto i : nums)
    ret += i;
  return ret;
}

int main(int argc, char *argv[])
{

  std::cout << sum({}) << std::endl;
  std::cout << sum({5}) << std::endl;
  std::cout << sum({0, -1, 20, 9, -10}) << std::endl;
  std::cout << -1 + 20 << std::endl;
  return 0;
}