#include <iostream>

int combat(int health, int damage)
{
  return health >= damage ? health - damage : 0;
}

int main()
{
  std::cout << combat(20, 30) << std::endl;
  return 0;
}