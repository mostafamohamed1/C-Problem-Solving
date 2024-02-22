#include <iostream>

using namespace std;

long pillars(int num_of_pillars, int distance, int width)
{
  return (num_of_pillars < 2) ? 0 : ((distance * 100) * num_of_pillars) - (distance * 100) + ((num_of_pillars - 2) * width);
}

long pillars1(int n, int d, int w)
{
  return n == 1 ? 0 : --n * d * 100 + --n * w;
}

int main()
{

  cout << pillars1(1, 10, 10) << endl;  // 0
  cout << pillars1(2, 20, 25) << endl;  // 2000
  cout << pillars1(11, 15, 30) << endl; // 15270
  return 0;
}
// 16500

// 2000 * 2 4000
