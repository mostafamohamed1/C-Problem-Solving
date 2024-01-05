#include <iostream>

/*
  A magician in the subway showed you a trick, he put an ice brick in a bottle to impress you. The brick's length and width are equal, forming a square; its height may be different. Just for fun and also to impress the magician and people around, you decided to calculate the brick's volume. Write a function iceBrickVolume that will accept these parameters:

  radius - bottle's radius (always > 0);
  bottleLength - total bottle length (always > 0);
  rimLength - length from bottle top to brick (always < bottleLength);
  And return volume of ice brick that magician managed to put into a bottle.
*/

int ice_brick_volume(int radius, int bottle_length, int rim_length)
{
  return (((bottle_length - rim_length) * radius) * radius) * 2;
}

int main()
{

  std::cout << ice_brick_volume(1, 10, 2) << std::endl;
  std::cout << ice_brick_volume(5, 30, 7) << std::endl;
  return 0;
}