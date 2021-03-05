#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class StackLinkedList
{
private:
	node *top;
	node *temp;
public:
	StackLinkedList()
	{
		top=NULL;
		temp=NULL;
	}
	void Insert(int val)
	{
		node *NewNode;
		NewNode=new node;
		NewNode->data=val;
		NewNode->next=top;
		top=NewNode;
	}
	void Display()
	{
		temp=top;
		if(temp==0)
		{
			cout<<"The list is empty"<<endl;
		}
		else
		{
			while (temp!=0)
			{
				cout<<temp->data<<",";
				temp=temp->next;
			}
			cout<<endl;
		}
	}
	void Peek()
	{
		if(top==0)
		{
			cout<<"The stack is empty"<<endl;
		}
		else
		{
			cout<<"The top element is :: "<<top->data<<endl;
		}
	}
	void Pop()
	{
		if(top==0)
		{
			cout<<"Underflow condition"<<endl;
		}
		else
		{
			cout<<"The Pop element is :: "<<top->data<<endl;
			top=top->next;
			delete temp;
		}
	}
};
int main()
{
	StackLinkedList s;
	s.Insert(4);
	s.Insert(9);
	s.Insert(6);
	s.Insert(10);
	s.Display();
	s.Peek();
	s.Pop();
	cout<<"After popping the Stack is :: ";
	s.Display();
	system("pause");
    return 0;
}
