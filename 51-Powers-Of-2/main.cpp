#include <iostream>

#include <vector>
#include <cstdint>

std::vector<uint64_t> powers_of_two(int n)
{
  std::vector<uint64_t> v = {1};
  for (int i = 1; i <= n; i++)
    v.push_back(v.at(v.size() - 1) * 2);
  return v;
}

int main()
{

  for (auto i : powers_of_two(4))
    std::cout << i << std::endl;



  return 0;
}