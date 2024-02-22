#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int count_sheep(vector<bool> arr)
{
  return std::count(arr.begin(), arr.end(), true);
}

int main()
{

  vector<bool> array1 =
      {true, true, true, false,
       true, true, true, true,
       true, false, true, false,
       true, false, false, true,
       true, true, true, true,
       false, false, true, true};

  cout << count_sheep(array1) << endl;

  return 0;
}
