
#include <iostream>
#include <string>
using namespace std;


class LinkedList
{
private:
  struct Node
  {
    string name;
    Node *pNext;
  };

  Node *current;
  Node *first;
public:
  LinkedList();
  LinkedList(string);
  ~LinkedList();
  void addList(string);

};


LinkedList::LinkedList()
{
    current = NULL;
    first = NULL;
}

LinkedList::LinkedList(string nm)
 {
/*
Stub for constructor
*/

 }
 
 LinkedList::~LinkedList()
{
/*
Stub for destructor
*/
}

 

void LinkedList::addList(string nm)
{/*
Stub for adding element to list
*/
}


int main()
{
  LinkedList c1;
   c1.addList("Bob");
   c1.addList("Mary");
   c1.addList("Joe");
   c1.addList("Beth");
   c1.addList("Roscoe");
   c1.addList("Icabad");
   c1.addList("Penelope");
   c1.addList("Ada");
   c1.addList("Albert");
   c1.addList("Prudence");
   c1.addList("Zigfried");
  //c1.displayList();
}