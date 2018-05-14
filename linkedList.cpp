#include <iostream> // std::cout
#include <string>   // std::string std::stof
#include <vector>   // std::vector
#include <sstream>  // std::stringstream
#include <numeric>  // std::iota, std::begin, std::end
#include <ctime>    // random number generator

struct node
{
  int data;
  node *prev;
};

class LinkedList
{
private:
  node *HEAD;

public:
  LinkedList()
  {
    this->HEAD = NULL;
  }

  void addNode(int value)
  {
    node *temp = new node;
    temp->data = value;
    temp->prev = this->HEAD;
    this->HEAD = temp;
  }

  int length()
  {
    if (this->HEAD == NULL)
    {
      return 0;
    }

    node *CUR = this->HEAD;
    int length = 0;
    while (CUR->prev != NULL)
    {
      length += 1;
      node *prevNode = CUR->prev;
      CUR = prevNode;
    }

    return length + 1;
  }

  std::string print()
  {
    if (this->HEAD == NULL)
    {
      return "NULL";
    }

    node *CUR = this->HEAD;
    std::string res = "";
    int length = 0;
    while (CUR->prev != NULL)
    {
      length += 1;
      res += (std::to_string(CUR->data) + " <-- ");
      node *prevNode = CUR->prev;
      CUR = prevNode;
    }

    return res + std::to_string(CUR->data);
  }
};

int main()
{
  LinkedList ll;
  ll.addNode(1);
  ll.addNode(3);
  ll.addNode(2);
  std::cout << "linked list length: " << ll.length() << "\n";
  std::cout << "Linked List :: " << ll.print() << "\n";
  return 0;
}