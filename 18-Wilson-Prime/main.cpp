#include <iostream>

using namespace std;

bool amIWilson(unsigned n)
{

  unsigned rst = 1;
  for (unsigned i = 2; i < n; i++)
    rst = (rst * i) % (n * n);
  return rst == n * n - 1;
}

int main()
{

  cout << amIWilson(9) << endl;
  cout << amIWilson(6) << endl;
  cout << amIWilson(2) << endl;
  cout << amIWilson(17) << endl;
  cout << amIWilson(5) << endl;
  cout << amIWilson(13) << endl;
  cout << amIWilson(563) << endl;

  return 0;
}
