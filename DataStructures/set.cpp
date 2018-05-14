#include <iostream>
#include <set>

int main()
{
  std::set<int> s;

  s.insert(5);
  s.insert(8);
  s.insert(9);
  s.insert(1);
  s.insert(3);

  for (auto i : s)
  {
    std::cout << i << " ";
  }

  std::cout << std::endl;

  std::set<int>::iterator itr = s.find(3);
  s.erase(itr);

  for (auto i : s)
  {
    std::cout << i << " ";
  }

  std::cout << std::endl;

  return 0;
}