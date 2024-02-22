#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int> &v)
{
  for (int i = 0; i < v.size(); i++)
  {
    for (int j = i + 1; j < v.size(); j++)
    {
      if (v[i] > v[j])
      {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
      }
    }
  }
}

int sum(vector<int> numbers)
{
  if (numbers.size() <= 1)
    return 0;
  sort(numbers);
  int ret = 0;
  for (int i = 1; i < numbers.size() - 1; i++)
    ret += numbers[i];

  return ret;
}

int main(int argc, char *argv[])
{
  cout << sum({6, 2, 1, 8, 10}) << endl;

  return 0;
}