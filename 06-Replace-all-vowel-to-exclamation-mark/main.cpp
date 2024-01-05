#include <iostream>
#include <string>
#include <regex>

using namespace std;

// string replace(const string &s)
// {
//   string vowels = "aeiouAEIOU";
//   string result = "";
//   bool flag = false;

//   for (int i = 0; i < s.size(); i++)
//   {
//     for (char item : vowels)
//     {
//       if (s[i] == item)
//       {
//         flag = true;
//         break;
//       }
//     }
//     if (flag)
//     {
//       result += "!";
//       flag = false;
//     }
//     else
//     {
//       result += s[i];
//     }
//   }

//   return result;
// }

string replace(const string &s)
{
  return regex_replace(s, (regex) "a|e|i|o|u|A|E|I|O|U", "!");
  ;
}

int main()
{
  cout << replace("Hi!") << endl;
  return 0;
}