#include <iostream>
#include <cctype>

// bool is_uppercase(const std::string &s)
// {
//   return none_of(s.cbegin(), s.cend(), islower);
// }

bool is_uppercase(const std::string &s)
{
  for (auto i : s)
  {
    if (i == ' ')
      continue;
    if (islower(i))
      return false;
  }
  return true;
}

int main()
{
  std::cout << is_uppercase("123ACSKLDFJSGSKLDFJSKLDFJ") << std::endl;
  return 0;
}