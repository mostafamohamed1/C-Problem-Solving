#include <iostream>
#include <string>

std::string greet(const std::string &n)
{
  return "Hello, " + n + " how are you doing today?";
}

int main()
{

  std::cout << greet("Ryan") << std::endl;
  std::cout << greet("Shingles") << std::endl;

  return 0;
}