#include <iostream>
#include <vector>

#define print(x) std::cout << x << std::endl;

long long factorial(unsigned int n, std::vector<long long> &vec);

long long C_nk(unsigned n, unsigned int k)
{
  std::vector<long long> vec(n + 1);
  auto n1 = factorial(n, vec);
  auto n2 = factorial(k, vec);
  auto n3 = factorial(n - k, vec);
  return n1 / (n2 * n3);
}

// int main()
// {
//   std::cout << C_nk(10, 6) << std::endl;
//   return 0;
// }