#include <iostream>
// #include <algorithm>
#include <sstream>
#include <cmath>

bool is_digit(std::string s)
{
  std::stringstream ss(s);
  double d;
  ss >> d;
  return ss && ss.eof();
}

// bool is_digit(std::string s)
// {

//   if (s.size() == 0)
//     return false;

//   size_t indexDot = s.find('.');
//   if (indexDot < s.size())
//     s.erase(indexDot, 1);
//   if (s.at(0) == '-')
//     s.erase(0, 1);

//   return std::all_of(s.begin(), s.end(), ::isdigit);
// }

int main()
{

  std::cout << is_digit("35.65") << std::endl;
  std::cout << is_digit("s2324") << std::endl;
  std::cout << is_digit("3 4") << std::endl;
  std::cout << is_digit("-234.4") << std::endl;

  std::cout << "=====================" << std::endl;
  std::cout << sqrt(9) << std::endl;
  return 0;
}