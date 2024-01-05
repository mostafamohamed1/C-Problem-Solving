#include <iostream>
#include <functional>

void TheTrue() { std::cout << "true"; }
void TheFalse() { std::cout << "false"; }

void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2)
{

  if (value)
  {
    func1();
  }
  else
  {
    func2();
  }
}

int main()
{

  _if(true, TheTrue, TheFalse);

  return 0;
}