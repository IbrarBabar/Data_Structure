#include <iostream>
using namespace std;
class STACK
{
	int *stack;
	int top;
	int size;
	int item;
public:
	STACK(int size=5)
	{
		top=-1;
		this->size=size;
		stack = new int[size];
		item=0;
	}
	void push(int val)
	{
		std::cout<<val<<",";
		if(top==(size-1)) //agar size 5 sy bhar jay ga to ye overflow hoga
		{
			cout<<"Overflow condition !!!"<<endl;
		}
		else
		{
			top++;
			stack[top]=val;
		}
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"Underflow Condition !!!"<<endl;
		}
		else
		{
			item = stack[top];
			top--;
			cout<<"The pop value is :: "<<item<<endl;
		}
	}
	void peek()
	{
		if(top==-1)
		{
			cout<<"Stack is empty !!!"<<endl;
		}
		else
		{
			cout<<"The Peek element is :: "<<stack[top]<<endl;
		}
	}
	void display()
	{
		for(int i=top;i>=0;i--)
		{
			cout<<stack[i]<<",";
		}
		cout<<endl;
	}
};
int main()
{
	int ch;
	STACK s;
	do
	{
		cout<<"Press 1) for push values !"<<endl;
		cout<<"Press 2) for pop values !"<<endl;
		cout<<"Press 3) for peek values !"<<endl;
		cout<<"Press 4) for display values !"<<endl;
		cin>>ch;
		switch (ch)
		{
		case 1:
			{
				s.push(5);
				s.push(3);
				s.push(9);
				s.push(7);
				s.push(2);
				cout<<endl;
			}
			break;
		case 2:
			{
				s.pop();
			}
			break;
		case 3:
		{
			s.peek();
		}
		break;
		case 4:
		{
			s.display();
		}
		break;
		default:
			cout<<"invalid option!"<<endl;
			break;
		}
	
	}
	while(!(ch==0));

	system("pause");
    return 0;
}