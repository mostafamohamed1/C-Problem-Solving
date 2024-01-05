#include <iostream>
#include <string>
#include <map>

using namespace std;

int solution(string roman)
{
  int result = 0;
  int old = 0;
  map<char, int> roMap{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

  for (auto a : roman)
  {
    int curr = roMap[a];
    result += curr;

    if (curr > old)
    {
      result -= 2 * old;
    }
    old = curr;
  }

  return result;
}

int main()
{
  cout << solution("I") << endl;
  cout << solution("IV") << endl;
  cout << solution("MMVIII") << endl;
  cout << solution("MDCLXVI") << endl;
}
