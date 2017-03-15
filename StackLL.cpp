#include "StackLL.h"
#include <iostream>
using namespace std;


class Stack::Node //self-referential Node class
{
	public:
	   int data = 0;
	   Node* link = nullptr;
	   //link is a data member which is a pointer 
	   //to an object of the same type (i.e. Node)
	
	};//end Node class definition (can only be seen by the List class)

Stack::Stack()
{
	frontPtr=nullptr;
	num_elements=0;
}

Stack::~Stack()
{
    while(num_elements > 0)
      remove(1);
}
	
int Stack::size()
 {
    return num_elements;
 }

void Stack::push(int val)
{
	
	
	Node* newPtr = new Node{val};
	
	
	{
	  newPtr->link = frontPtr;
	  frontPtr = newPtr;
	 }
	

     num_elements++;
 }

void Stack::pop()
{
	
	Node*delptr;
        int deldata;
	
	  delPtr = frontPtr;
	  frontPtr = frontPtr->link;
	del_data=delptr->data; 
	delete delPtr;
	num_elements--;
}
void Stack::display ()
{
	   
        for (Node*currPtr=frontPtr; currPtr!=nullptr; currPtr=currPtr->link)
          {
             cout << currPtr->data <<" ";
          }
}//display
void Stack::clear ()//clears list i.e removes every element
{
        while (num_elements!=0)
        {
          pop();
        }
}//clear
int Stack::top ()
{
       Node*currPtr=frontPtr;
       return currPtr->data;
}//getAt
