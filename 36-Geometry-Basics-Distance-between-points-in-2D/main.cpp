#include <iostream>
#include <cmath>

struct Point
{
  double x;
  double y;
};

double
distance_between_two_points(const Point &a, const Point &b)
{
  double dx = a.x - b.x;
  double dy = a.y - b.y;
  double distance_squared = dx * dx + dy * dy;
  return sqrt(distance_squared);
}

int main()
{

  std::cout << distance_between_two_points(Point{1, 2}, Point{3, 5}) << std::endl;

  return 0;
}