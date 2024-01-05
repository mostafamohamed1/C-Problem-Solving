#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// vector<int> between(int start, int end)
// {
//   vector<int> result;
//   while (start <= end)
//   {
//     result.push_back(start);
//     start++;
//   }

//   return result;
// }

vector<int> between(int start, int end)
{
  vector<int> vec(end);
  iota(vec.begin(), vec.end(), start);
  return vec;
}

int main()
{
  int a = 1;
  int b = 4;
  vector<int> result = between(a, b);

  for (int item : result)
    cout << item << endl;

  return 0;
}
