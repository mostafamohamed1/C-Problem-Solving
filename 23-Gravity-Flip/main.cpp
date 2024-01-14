#include <iostream>
#include <vector>

std::vector<int> sortWithDir(std::vector<int> v, char d)
{
  for (int i = 0; i < v.size(); i++)
  {
    for (int j = i + 1; j < v.size(); j++)
    {
      if (v.at(i) < v.at(j) && d == 'L')
      {
        int temp = v.at(i);
        v.at(i) = v.at(j);
        v.at(j) = temp;
      }
      if (v.at(i) > v.at(j) && d == 'R')
      {
        int temp = v.at(i);
        v.at(i) = v.at(j);
        v.at(j) = temp;
      }
    }
  }
  return v;
}

std::vector<int> flip(const char dir, const std::vector<int> &arr)
{
  std::vector<int> flippedArr = sortWithDir(arr, dir);

  return flippedArr;
}

int main()
{

  for (int i : flip('R', {3, 2, 1, 2}))
  {
    std::cout << i;
  }

  return 0;
}