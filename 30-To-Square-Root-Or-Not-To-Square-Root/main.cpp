#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

std::vector<int> squareOrSquareRoot(std::vector<int> arr)
{
  std::transform(arr.cbegin(), arr.cend(), arr.begin(),
                 [](const int val)
                 {
                   const int tmp = std::sqrt(val);
                   if (tmp * tmp == val)
                     return tmp;
                   return val * val;
                 });
  return arr;
}

// std::vector<int> squareOrSquareRoot(const std::vector<int> &array)
// {
//   std::vector<int> v;
//   for (int item : array)
//   {
//     float f = 1;
//     float sq = sqrt(item);
//     float mod = modff(sq, &f);

//     if (mod == 0)
//     {
//       v.push_back(sq);
//     }
//     else
//     {
//       v.push_back(item * item);
//     }
//   }
//   return v;
// }

int main()
{
  for (int a : squareOrSquareRoot(std::vector<int>{4, 3, 9, 7, 2, 1}))
  {
    std::cout << a << std::endl;
  }
  return 0;
}