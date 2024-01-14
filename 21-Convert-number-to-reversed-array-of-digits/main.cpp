#include <iostream>
#include <vector>

std::vector<int> digitize(unsigned long n)
{

  if (n == 0)
    return {0};
  std::vector<int> arr;
  do
  {
    arr.push_back(n % 10);
    n /= 10;
  } while (n > 0);

  return arr;
}

int main()
{

  for (int i : digitize(0))
    std::cout << i << std::endl;

  for (int i : digitize(348597))
    std::cout << i << std::endl;

  return 0;
}