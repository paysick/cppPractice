#include <iostream>

struct node
{
  int x;
  node *L;
  node *R;
};
/*
            10
        15       30
       3  6        2
      5          9   8
*/

void inorder(node &HEAD)
{
  if (&HEAD == nullptr)
  {
    return;
  }

  if (HEAD.L != nullptr)
  {
    inorder(*(HEAD.L));
  }

  std::cout << HEAD.x << std::endl;

  if (HEAD.R != nullptr)
  {
    inorder(*(HEAD.R));
  }
}

main()
{
  node n1 = {5, nullptr, nullptr};
  node n2 = {3, &n1, nullptr};
  node n3 = {6, nullptr, nullptr};
  node n4 = {15, &n2, &n3};
  node n5 = {9, nullptr, nullptr};
  node n6 = {8, nullptr, nullptr};
  node n7 = {2, &n5, &n6};
  node n8 = {30, nullptr, &n7};
  node n9 = {10, &n4, &n8};

  inorder(n9);

  return 0;
}