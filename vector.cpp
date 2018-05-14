#include <iostream>
#include <vector>

class Obj
{
public:
  int val;

public:
  Obj(int x) : val(x)
  {
    // std::cout << "New obj constructed" << std::endl;
  }

  ~Obj()
  {
    // std::cout << "Obj with value " << this->val << " destructed" << std::endl;
  }

  Obj(const Obj &obj)
  {
    std::cout << "copied" << std::endl;
  }
};

int main()
{
  std::vector<Obj> v;
  v.reserve(4);
  v.emplace_back(1);
  v.emplace_back(2);
  v.emplace_back(3);
  v.push_back(Obj(4));
  return 0;
}