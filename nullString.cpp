#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

int main()
{
  std::cout << "HERE" << std::endl;
  std::vector<std::string> v = {"josh", "Rocco", "NULL", "Puncture"};

  std::string null = "INTI";

  try
  {
    null = v[2];
  }
  catch (std::logic_error &err)
  {
    null = "NULL";
  }

  std::cout << null << std::endl;

  return 0;
}