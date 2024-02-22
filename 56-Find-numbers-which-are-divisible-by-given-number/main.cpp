#include <iostream>
#include <vector>

std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
  std::vector<int> v;

  for (auto i : numbers)
  {
    if (i % divisor == 0)
      v.push_back(i);
  }
  return v;
}

int main()
{

  for (auto i : divisible_by({1, 2, 3, 4, 5, 6}, 2))
  {
    std::cout << i << std::endl;
  }

  return 0;
}