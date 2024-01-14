#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string findNeedle(std::vector<std::string> haystack)
{
  ptrdiff_t flag = find(haystack.begin(), haystack.end(), "needle") - haystack.begin();
  return "found the needle at position " + std::to_string(flag);
}

int main()
{
  std::cout << findNeedle(std::vector<std::string>{"hay", "junk", "hay", "hay", "moreJunk", "needle", "randomJunk"}) << std::endl;
  return 0;
}