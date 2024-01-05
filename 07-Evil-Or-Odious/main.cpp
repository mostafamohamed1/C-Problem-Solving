#include <iostream>
#include <string>
#include <vector>

using namespace std;

string evil(int n)
{
  int number = n;
  int OddOrEven = 0;
  while (number != 0)
  {
    if (number % 2 != 0)
      OddOrEven += 1;

    number = number / 2;
  }
  return OddOrEven % 2 == 0 ? "It's Evil!" : "It's Odious!";
}

int main()
{
  cout << evil(6) << endl;
}