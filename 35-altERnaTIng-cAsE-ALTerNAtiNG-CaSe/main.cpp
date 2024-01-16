#include <iostream>
#include <cctype>

std::string to_alternating_case(const std::string &str)
{
  std::string a = "";
  for (int i = 0; i < str.size(); i++)
  {
    std::cout << str[i] << std::endl;
    if (islower(str[i]))
    {
      a += toupper(str[i]);
    }
    else
    {
      a += tolower(str[i]);
    }
  }
  return a;
}

int main()
{

  std::cout << to_alternating_case("hello, world") << std::endl;

  return 0;
}