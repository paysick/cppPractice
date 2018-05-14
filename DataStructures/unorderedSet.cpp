#include <iostream>
#include <unordered_set>

int main()
{
  std::unordered_set<int> uset;
  uset.insert(1);
  uset.insert(5);
  uset.insert(3);
  uset.insert(6);

  std::cout << uset.count(5) << std::endl;
  return 0;
}