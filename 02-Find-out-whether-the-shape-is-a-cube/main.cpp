#include <iostream>
#include <cmath>

using namespace std;

bool is_cube(int volume, int side)
{
  return side > 0 && volume > 0 && side * side * side == volume;
}

int main()
{

  cout << is_cube(1, 1) << endl;
  cout << is_cube(8, 2) << endl;
  cout << is_cube(2, 1) << endl;
  cout << is_cube(6, 3) << endl;
  cout << is_cube(-8, -2) << endl;
  cout << is_cube(0, 0) << endl;
  cout << is_cube(200, 4) << endl;
  cout << is_cube(91125, 45) << endl;

  return 0;
}