#include <iostream>
#include <vector>
#include <numeric>

int arrayPlusArray(std::vector<int> a, std::vector<int> b)
{
  int arr1 = std::accumulate(a.begin(), a.end(), 0);
  int arr2 = std::accumulate(b.begin(), b.end(), 0);
  return arr1 + arr2;
}

int main()
{

  std::cout << arrayPlusArray({1, 2, 3}, {4, 5, 6}) << std::endl;

  return 0;
}