// Longest Common Subsequence

#include <iostream>
#include <string>

#define print(x) std::cout << x << std::endl;

std::string LCS(std::string str1, std::string str2)
{
  std::string res;

  auto itr = str2.rbegin();

  for (auto itr1 = str1.rbegin(); itr1 != str1.rend(); itr1++)
  {
    for (auto itr2 = itr; itr2 != str2.rend(); itr2++)
    {
      if (*itr1 == *itr2)
      {
        itr = itr2 + 1;
        res.append(itr1, itr1 + 1);
        break;
      }
    }
  }

  std::string y(res.rbegin(), res.rend());
  return y;
}

// int main()
// {
//   auto x = LCS("ABCDGH", "AEDFHR");
//   print(x);
//   return 0;
// }