#include <string>
#include <iostream>
std::string repeat_str(size_t repeat, const std::string str, std::string returnedStr = "")
{
  return (repeat <= 0) ? returnedStr : repeat_str(repeat -= 1, str, returnedStr + str);
}

int main()
{

  std::cout << repeat_str(10, "M") << std::endl;

  return 0;
}