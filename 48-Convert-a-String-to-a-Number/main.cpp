#include <iostream>
#include <string>

int string_to_number(const std::string &s)
{
  return std::stoi(s);
}

int main()
{

  auto i = string_to_number("1234");
  std::cout << typeid(i).name() << std::endl;

  return 0;
}