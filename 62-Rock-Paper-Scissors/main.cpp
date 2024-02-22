#include <iostream>
#include <string>
#include <unordered_map>

std::string rps1(const std::string &p1, const std::string &p2)
{
  static const std::unordered_map<std::string, std::string> beats{
      {"rock", "paper"},
      {"paper", "scissors"},
      {"scissors", "rock"}};

  if (p1 == beats.at(p2))
  {
    return "Player 1 won!";
  }
  else if (p2 == beats.at(p1))
  {
    return "Player 2 won!";
  }
  else
  {
    return "Draw!";
  }
}

std::string rps(const std::string &p1, const std::string &p2)
{

  if (p1 == "scissors" && p2 == "rock")
    return "Player 2 won!";
  if (p2 == "scissors" && p1 == "rock")
    return "Player 1 won!";
  if (p1 == "scissors" && p2 == "paper")
    return "Player 1 won!";
  if (p2 == "scissors" && p1 == "paper")
    return "Player 2 won!";
  if (p1 == "rock" && p2 == "paper")
    return "Player 2 won!";
  if (p2 == "rock" && p1 == "paper")
    return "Player 1 won!";

  return "Draw!";
}

int main()
{

  std::cout << rps1("rock", "scissors") << std::endl;
  std::cout << rps1("scissors", "rock") << std::endl;
  std::cout << rps1("rock", "rock") << std::endl;

  return 0;
}