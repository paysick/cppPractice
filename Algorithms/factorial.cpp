#include <vector>

long long _fact(unsigned int n, std::vector<long long> &vec)
{
  if (vec[n] > 0)
  {
    return vec[n];
  }

  long long prevFactorial = _fact(n - 1, vec);
  long long res = n * prevFactorial;
  vec[n] = res;

  return res;
}

long long factorial(unsigned int n)
{
  std::vector<long long> vec(n + 1);
  vec[0] = 1;
  return _fact(n, vec);
}

long long factorial(unsigned int n, std::vector<long long> &vec)
{
  vec[0] = 1;
  return _fact(n, vec);
}

// int main()
// {
//   unsigned int num;
//   std::cin >> num;
//   std::cout << factorial(num) << std::endl;
//   return 0;
// }