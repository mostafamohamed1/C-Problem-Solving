#include <iostream>
#include <vector>
#include <numeric>

int get_average(std::vector<int> marks)
{
  return std::accumulate(marks.begin(), marks.end(), 0) / marks.size();
}

int main()
{
  std::cout << get_average(std::vector<int>{2, 2, 2, 2}) << std::endl;

  return 0;
}