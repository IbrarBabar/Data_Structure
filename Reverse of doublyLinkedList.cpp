#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
	node *prev;
};
class LinkedList
{
private:
	node *head;
	node *tail;

public:
	LinkedList()
	{
		head = NULL;
	}
	void insert(int Data)
	{
		node *NewNode= new node; 
		NewNode->data=Data;
		NewNode->next=0;
		NewNode->prev=0;
		if(head==0)
		{
			head=tail=NewNode;
		}
		else
		{
			tail->next=NewNode;
			NewNode->prev=tail;
			tail=NewNode;
		}
	}
	void Display()
	{
		tail = head;
		cout<<"The Doubly linked list is :: ";
		while (tail!=0)
		{
			cout << tail->data<< ",";
			tail = tail->next;	
		}
		cout << endl;
	}
	void Reverse()
	{
		node *current;
		node *nextnode;
		current=head;
		while(tail!=0)
		{
			nextnode=current->next;
			current->next=current->prev;
			current->prev=nextnode;
			current=nextnode;
		}
		current=head;
		head=tail;
		tail=current;

	}
};
int main()
{
	LinkedList L;
	L.insert(4);
	L.insert(2);
	L.insert(6);
	L.insert(8);
	L.Display();
	L.Reverse();
	L.Display();
	system("pause");
    return 0;
}
