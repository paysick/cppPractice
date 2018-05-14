#include <iostream>
#include <string>

bool check(std::string::iterator begin, std::string::reverse_iterator rbegin)
{
  bool res = true;
  while (begin < rbegin.base() - 1)
  {
    if (*begin != *rbegin)
    {
      res = false;
      break;
    }

    begin++;
    rbegin++;
  }
  return res;
}

int minPartitions(std::string::iterator begin, std::string::reverse_iterator rbegin, std::string str)
{
  if (check(begin, rbegin))
  {
    return 0;
  }

  int res = 1 + minPartitions(rbegin.base() - 1, str.rend(), str) + minPartitions(begin, rbegin + 1, str);

  return res;
}

int palindromePartitions(std::string str)
{
  return minPartitions(str.begin(), str.rbegin(), str);
}

int main()
{
  std::cout << palindromePartitions("ababbbabbababa") << std::endl;
  return 0;
}