#include <iostream>
#include <vector>

std::vector<int> sortedArr(std::vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = i + 1; j < arr.size(); j++)
    {
      if (arr.at(i) > arr.at(j))
      {
        int temp = arr.at(i);
        arr.at(i) = arr.at(j);
        arr.at(j) = temp;
      }
    }
  }
  return arr;
}

int sumOfDifferences(std::vector<int> arr)
{
  if (arr.size() <= 1)
    return 0;

  int sum = 0;
  std::vector<int> sorted = sortedArr(arr);

  for (int i = sorted.size() - 1; i >= 1; i--)
  {
    sum = sum + (sorted.at(i) - sorted.at(i - 1));
  }
  return sum;
}

int main()
{
  std::cout << sumOfDifferences({1, 2, 10}) << std::endl;
  return 0;
}