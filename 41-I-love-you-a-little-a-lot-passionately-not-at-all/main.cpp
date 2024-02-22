#include <iostream>
#include <array>
#include <string>

std::array<std::string, 6> words = {
    "I love you",
    "a little",
    "a lot",
    "passionately",
    "madly",
    "not at all"};

std::string how_much_i_love_you(int nb_petals)
{
  if (nb_petals > words.size())
    return words.at(((nb_petals - 1) % words.size()));

  return words.at(nb_petals - 1);
}

int main(int argc, char *argv[])
{

  std::cout << how_much_i_love_you(407) << std::endl;
  std::cout << how_much_i_love_you(108) << std::endl;
  std::cout << how_much_i_love_you(2) << std::endl;
  std::cout << how_much_i_love_you(3) << std::endl;
  std::cout << (108 % 6) << std::endl;

  return 0;
}