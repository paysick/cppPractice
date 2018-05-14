#include <iostream>
#include <vector>

void printVector(std::vector<long long> &vec)
{
  for (auto itr = vec.begin(); itr != vec.end(); itr++)
  {
    std::cout << *itr << " ";
  }

  std::cout << std::endl;
}