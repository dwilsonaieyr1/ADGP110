//Date: 10/6/2015
//Author: Rory Vaughn
//Teacher: Matthew Williamson
//Assignment: Stacks Excersise
#include <iostream>
#include <string>
using namespace std;
class Stack 
{
	public:
		struct item 
	{
		string name;
		int value;
		item* prev;
	};
	item* StackPtr;
	void Push(string name, int value); //This fucntion will add the next node the stack, becoming the top node.
	void Pop(); //This function will take the node on the top of the stack off, and make the node under it the new top of the stack (if the under node is not NULL).
	void Read(item* r); //This function will allow the program to read the contents of the nodes.
	void Print(); //This will print the contents that are read in the node to the console.
	void Size();
	Stack();
	~Stack();
};
int w = 0;
Stack::Stack()
	{
		StackPtr = NULL; //This creates the Stack beginning with a NULL stack.
	}
	Stack::~Stack()
	{
		item* p1;
		item* p2;
		p1 = StackPtr;
		while (p1 != NULL)
		{
			p2 = p1;
			p1 = p1->prev;
			p2->prev = NULL;
			delete p2;
		}
	}
	void Stack::Push(string name, int value) //This is the Prototype of the Push function.
	{
		item* n = new item;
		n->name = name;
		n->value = value;
		if (StackPtr == NULL)
		{
			StackPtr = n;
			StackPtr->prev = NULL;
			w++;
		}
		else
		{
			n->prev = StackPtr;
			StackPtr = n;
			w++;
		}
	}
	void Stack::Read(item* r)
	{
		cout << "                 " << endl;
		cout << "Name: " << r->name << endl; // This will display the name of the node.
		cout << "Value: " << r->value << endl; //This will display the value of the node.
		cout << "                 " << endl;
	}
	void Stack::Pop() //This fuction will  bve used to "pop" a node off the stack.
	{
		if (StackPtr == NULL)
		{
			cout << "There is nothing on the stack." << endl; //If there is nothing on the stack then this will display.
		}
		else //If the stack has contents, the following code will excecute. THis also uses the "Stack::Read" function.
		{
			while (StackPtr != NULL) //This "While" fucntion pops off nodes until the stack is once again empty.
			{
				item* p = StackPtr;
				Read(p);
				StackPtr = StackPtr->prev;
				p->prev = NULL;
				delete p;
				cout << "The previous node has been popped off of the stack." << endl;
				w--;
			}
		}
	}
	void Stack::Size()
	{
			cout << "The amount of nodes that are currently on the stack is: " << w << endl;
	}

	void Stack::Print()
	{
		item* p = StackPtr;
		
		while (p != NULL)
		{
			Read(p);
			p = p->prev;
		}
	}
int main()
{
	Stack Rory;
	Rory.Push("Rory", 1);
	Rory.Push("Ben", 2);
	Rory.Push("Donte", 3);
	Rory.Push("Zac", 4);
	Rory.Push("Dylan", 5);
	Rory.Push("Trumpet", 6);
	Rory.Push("Matthew", 7);
	Rory.Push("Jeremy", 8);
	Rory.Push("Cole", 9);
	Rory.Push("Andrew", 10);//All of this adds nodes to the stack.
	Rory.Size();//this function shows the size off the stack at the current time.
	Rory.Print(); //This function prints what is on the stack.
	Rory.Size();//this function shows the size off the stack at the current time.
	Rory.Pop(); //This fucntion will pop off what is on the Top of the stack until the stack is NULL.
	Rory.Size();//this function shows the size off the stack at the current time.
	Rory.Print(); //This function will show that there is nothing left on the stack.
	Rory.Size();//this function shows the size off the stack at the current time.
	system("pause");
	return 0;
}