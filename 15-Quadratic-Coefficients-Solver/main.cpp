#include <iostream>
#include <tuple>

std::tuple<int, int, int> quadratic(int x1, int x2)
{
  return {1, -(x1 + x2), x1 * x2}; // Answer in tuple
}

int main()
{

  std::apply([](auto &&...args)
             { ((std::cout << args << std::endl), ...); },
             quadratic(1, 1));
}