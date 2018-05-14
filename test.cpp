#include <iostream>

void print(int *arr);

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 7};
  std::cout << arr << std::endl;

  print(arr);
}

void print(int *arr)
{
  // for (int i = 0; i < 6; i++)
  // {
  std::cout << arr << std::endl;
  // }
  // return;
}