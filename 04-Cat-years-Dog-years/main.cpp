#include <iostream>
#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears)
{
  std::vector<int> v(3);

  v.at(0) = humanYears;

  for (int i = 1; i <= humanYears; i++)
  {
    if (i == 1)
    {
      v.at(1) = 15;
      v.at(2) = 15;
    }
    else if (i == 2)
    {
      v.at(1) += 9;
      v.at(2) += 9;
    }
    else if (i >= 3)
    {
      v.at(1) += 4;
      v.at(2) += 5;
    }
  }

  return v;
}

int main()
{

  for (int item : humanYearsCatYearsDogYears(10))
  {
    std::cout << item << std::endl;
  }

  return 0;
}