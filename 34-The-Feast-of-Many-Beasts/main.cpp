#include <iostream>
#include <string>

bool feast(std::string beast, std::string dish)
{
  return beast.at(0) == dish.at(0) && beast.at(beast.size() - 1) == dish.at(dish.size() - 1);
}

int main()
{

  std::cout << feast("great blue heron", "garlic naan") << std::endl;
  return 0;
}