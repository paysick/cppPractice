#include <iostream>
#include <unordered_map>
#include <utility>

int fib(int n, std::unordered_map<int, int> &map);
int solveFib(int n);

// int main()
// {
//   int val;
//   std::cin >> val;
//   std::cout << solveFib(val) << std::endl;
//   return 0;
// }

int solveFib(int n)
{
  std::unordered_map<int, int> map;
  map.insert(std::make_pair<int, int>(0, 1));
  map.insert(std::make_pair<int, int>(1, 1));

  return fib(n, map);
}

int fib(int n, std::unordered_map<int, int> &map)
{
  auto itr = map.find(n);
  if (itr != map.end())
  {
    return itr->second;
  }

  int res = fib(n - 1, map) + fib(n - 2, map);
  map.insert(std::make_pair<int, int>((int)n, (int)res));

  return res;
}