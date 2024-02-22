#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <fstream>

std::vector<int> MonkeyCount(int n)
{
  std::vector<int> v(n);

  std::generate(v.begin(), v.end(), [i = 1]() mutable
                { return i++; });
  return v;
}

int main(int argc, char *argv[])
{

  for (auto i : MonkeyCount(10))
    std::cout << i << " ";

  std::cout << "\n=======================" << std::endl;

  char str[256];
  std::cout << "Enter Your Name: " << std::endl;
  std::cin.get(str, 256);
  std::ifstream is(str);
  char c;
  while (is.get(c))
  {
    std::cout << c;
  }

  is.close();

  return 0;
}