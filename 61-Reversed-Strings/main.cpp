#include <iostream>
#include <string>

using namespace std;

string reverseString(string str)
{
  int size = str.size() / 2;
  for (int i = 0; i < size; i++)
  {
    char temp = str[i];
    str[i] = str[str.size() - 1 - i];
    str[str.size() - 1 - i] = temp;
  }
  return str;
}

int main()
{

  cout << reverseString("codewars") << endl;
  return 0;
}