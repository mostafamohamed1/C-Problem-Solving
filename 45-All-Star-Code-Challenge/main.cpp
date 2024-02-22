#include <iostream>
#include <string>

unsigned int strCount(const std::string &word, char letter)
{
  if (word.size() == 0)
    return 0;
  int count = 0;
  for (auto item : word)
  {
    if (item == letter)
      count++;
  }
  return count;
}

int main()
{
  std::cout << strCount("Hello", 'o') << std::endl; // returns 1
  std::cout << strCount("Hello", 'l') << std::endl; // returns 2
  std::cout << strCount("", 'z') << std::endl;      // returns 0
  return 0;
}