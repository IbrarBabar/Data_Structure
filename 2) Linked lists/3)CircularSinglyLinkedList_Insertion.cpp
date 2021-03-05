#include <iostream>
using namespace std;
struct node
{
	char data;
	struct node *next;
};
class CricularLinkedList
{
	node *head;
	node *tail;
public:
	CricularLinkedList()
	{
		head =NULL;
		tail=NULL;
	}
	void insert(char a)
	{
		node *NewNode= new node; 
		NewNode->data=a;
		NewNode->next=0;
		if(head==0)
		{
			head=tail=NewNode;
		}
		else
		{
			NewNode->next=tail->next;
			tail->next=NewNode;
			tail=NewNode; 
		}
		tail->next=head;
}
void Display()
{
	tail=head;
	while(tail->next!=head)
	{
		//tail=tail->next;
		cout<<tail->data;
		tail=tail->next;
	}
	cout<<tail->data;
}
void reverse()
{
	node *curr;
	node *prev;
	node *nextnode;
	curr=tail->next;
	nextnode=curr->next;
	while(curr!=tail)
	{
		prev =curr;
		curr=nextnode;
		nextnode=curr->next;
		curr->next=prev;
	}
	nextnode->next=tail;
	tail=nextnode;
}
	/*void counter()	
	{
		tail=head;
		int count=0;
		int pos1,pos2;
		cout<<"enter position 1"<<endl;
		cin>>pos1;
		cout<<"enter 2nd position"<<endl;
		cin>>pos2;
		for(int i=pos1;i<=pos2;i++)
		{
			tail=tail->next;
		//	while(tail->next!=head)
		//	{
				//tail=tail->next;
				count++;
			//}
		}
		cout<<"Total :: "<<count+1<<endl;
	}*/
	void counter()
	{
		//tail=head;
		node *temp;
		temp=head;
		int count=0;
		int pos1,pos2;
		cout<<"enter 1,2"<<endl;
		cin>>pos1>>pos2;
		for(int i=pos1;i<=pos2;i++)
		{
			temp=temp->next;
			count++;
		}
		//while(tail->next!=head)
		//{
	//	for(tail=head;tail->next!=head;tail=tail->next)
	//	{
	//		for(int i=pos1;i<=pos2;i++)
	//		{
//
//			//tail=tail->next;
//			count++;
//			}
//		}
		cout<<"Total :: "<<count+1<<endl;
	}
};
int main()
{
	CricularLinkedList L;
	L.insert('h');
	L.insert('e');
	L.insert('l');
	L.insert('l');
	L.insert('o');
		L.insert(' ');
	L.insert('e');
	L.insert('v');
	L.insert('e');
	L.insert('r');
	L.insert('y');
		L.insert(' ');
	L.insert('b');
	L.insert('o');
	L.insert('d');
	L.insert('y');
	L.Display();
	cout<<endl;
//	L.counter();
	system("pause");
    return 0;
}
