#include <iostream>

#include <vector>

std::vector<int> pipe_fix(const std::vector<int> &nums)
{

  std::vector<int> v;
  for (int i = nums.at(0); i <= nums.at(nums.size() - 1); i++)
  {
    v.push_back(i);
  }

  return v;
}

int main()
{
  for (int i : pipe_fix({1, 2, 3, 5, 6, 8, 9}))
    std::cout << i;

  return 0;
}