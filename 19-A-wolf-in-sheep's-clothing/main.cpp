#include <iostream>
#include <vector>
#include <string>

std::string warn_the_sheep(const std::vector<std::string> &queue)
{
  if (queue.at(size(queue) - 1) == "wolf")
    return "Pls go away and stop eating my sheep";

  int position = 0;
  for (int i = size(queue) - 1; i >= 0; i--)
  {
    if (queue.at(i) == "wolf")
    {
      position = i;
      break;
    }
  }
  return "Oi! Sheep number " + std::to_string(size(queue) - (position + 1)) + "! You are about to be eaten by a wolf!";
}

int main()
{
  std::cout << warn_the_sheep({"sheep", "wolf", "sheep"}) << std::endl;
  std::cout << warn_the_sheep({"sheep", "sheep", "sheep", "sheep", "sheep", "wolf", "sheep", "sheep"}) << std::endl;
  return 0;
}