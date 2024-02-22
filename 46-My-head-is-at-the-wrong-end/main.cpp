#include <array>
#include <string>
#include <iostream>

std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr)
{
  return {arr.at(arr.size() - 1), arr.at(1), arr.at(0)};
}

int main()
{

  for (auto i : fixTheMeerkat({"tail", "body", "head"}))
    std::cout << i;

  return 0;
}