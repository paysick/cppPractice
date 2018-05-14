#include <iostream>
#include <map>
#include <string>
#include <utility>

int main()
{
  std::pair<std::string, int> p1("A", 1);
  std::pair<std::string, int> p2("B", 2);
  std::pair<std::string, int> p3("C", 3);
  std::pair<std::string, int> p4("D", 4);

  std::map<std::string, int> m;

  m.insert(p1);
  m.insert(p2);
  m.insert(p3);
  m.insert(p4);

  std::cout << m["A"] << std::endl;

  return 0;
}