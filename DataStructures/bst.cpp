#include <iostream>

struct node
{
  int x;
  node *L;
  node *R;
};

class BST
{
public:
  node *HEAD = nullptr;

  void insert(int x)
  {
    node n = {x, nullptr, nullptr};
    if (HEAD == nullptr)
    {
      HEAD = &n;
      return;
    }

    node *TEMP = HEAD;
    while (true)
    {
      if (x <= TEMP->x)
      {
        if (TEMP->L == nullptr)
        {
          TEMP->L = &n;
          break;
        }
        else
        {
          TEMP = TEMP->L;
        }
      }
      else
      {
        if (TEMP->R == nullptr)
        {
          TEMP->R = &n;
          break;
        }
        else
        {
          TEMP = TEMP->R;
        }
      }
    }
  }

  void print()
  {
    if (HEAD == nullptr)
    {
      std::cout << "{}" << std::endl;
      return;
    }

    std::cout << "{ ";

    node *TEMP = HEAD;
    inorder(TEMP);

    std::cout << " }" << std::endl;
  }

  void inorder(node *n)
  {
    if (n->L == nullptr)
    {
      std::cout << n->x << " ,";
      if (n->R != nullptr)
      {
        inorder(n->R);
      }
    }
    else
    {
      inorder(n->L);
      std::cout << n->x << " ,";
      if (n->R != nullptr)
      {
        inorder(n->R);
      }
    }

    return;
  }
};

int main()
{
  BST bst;
  bst.insert(2);
  // bst.insert(3);
  // bst.insert(7);
  // bst.insert(1);
  // bst.insert(5);
  // bst.insert(9);
  bst.print();
  return 0;
}