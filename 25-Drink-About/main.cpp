#include <iostream>
#include <string>

std::string people_with_age_drink(int age)
{
  return age < 14 ? "drink toddy" : age < 18 ? "drink coke"
                                : age < 21   ? "drink beer"
                                             : "drink whisky";
}

int main()
{

  std::cout << people_with_age_drink(0) << std::endl;
  std::cout << people_with_age_drink(13) << std::endl;
  std::cout << people_with_age_drink(14) << std::endl;
  std::cout << people_with_age_drink(17) << std::endl;
  std::cout << people_with_age_drink(18) << std::endl;
  std::cout << people_with_age_drink(20) << std::endl;
  std::cout << people_with_age_drink(21) << std::endl;
  std::cout << people_with_age_drink(25) << std::endl;

  return 0;
}