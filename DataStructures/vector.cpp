#include <iostream>
#include <vector>

int main()
{
  int arr[] = {4, 6, 2, 1, 7, 4, 7, 3, 2};
  int arrSize = sizeof(arr) / sizeof(int);

  std::vector<int> vec;
  vec.reserve(arrSize);

  for (int i = 0; i < arrSize; i++)
  {
    vec.emplace_back(arr[i]);
  }

  for (std::vector<int>::const_iterator itr = vec.cbegin(); itr != vec.cend(); itr++)
  {
    std::cout << *itr << " ";
  }

  std::cout << std::endl;

  return 0;
}