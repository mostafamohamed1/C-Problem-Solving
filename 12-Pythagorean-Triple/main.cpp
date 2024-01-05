/*
  Given an unsorted array of 3 positive integers [ n1, n2, n3 ], determine if it is possible to form a Pythagorean Triple using those 3 integers.

  A Pythagorean Triple consists of arranging 3 integers, such that:

  a2 + b2 = c2

  Examples
  [5, 3, 4] : it is possible to form a Pythagorean Triple using these 3 integers: 32 + 42 = 52

  [3, 4, 5] : it is possible to form a Pythagorean Triple using these 3 integers: 32 + 42 = 52

  [13, 12, 5] : it is possible to form a Pythagorean Triple using these 3 integers: 52 + 122 = 132

  [100, 3, 999] : it is NOT possible to form a Pythagorean Triple using these 3 integers - no matter how you arrange them, you will never find a way to satisfy the equation a2 + b2 = c2
*/

#include <iostream>

void sort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int pow(int num, int base = 2)
{
  int result = 1;
  for (int i = 0; i < base; i++)
    result *= num;

  return result;
}

bool PythagoreanTriple(const int a, const int b, const int c)
{

  int arr[] = {a, b, c};
  sort(arr, 3);

  return pow(arr[0]) + pow(arr[1]) == pow(arr[2]) ? true : false;
}

int main()
{

  std::cout << PythagoreanTriple(3, 4, 5) << std::endl;
  std::cout << PythagoreanTriple(5, 3, 4) << std::endl;
  std::cout << PythagoreanTriple(3, 5, 9) << std::endl;
  std::cout << PythagoreanTriple(5, 2, 4) << std::endl;

  return 0;
}