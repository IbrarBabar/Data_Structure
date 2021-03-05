#include<iostream>
using namespace std;
struct ARRAY
{
private:
	int arr[200];
	int *ptr;
	int size;		
	int count;
	int pos;
public:
	ARRAY()
	{
		ptr=arr;
		cout<<"Enter the Size of Array :: ";
		cin>>size;
		ptr=new int[size];
		count=0;
		pos=0;
	}
	void getArraySize()
	{
		cout<<"Enter the Size of Array :: ";
		cin>>size;
	}
	void GetArray()
	{
		//while(*arr<size)
		for (int a=0;a<size;a++)
		{
			cout<<"enter data :: ";
			cin>>*(arr+a);
		}
	}
	void Display()
	{
		cout<<"Array :: ";
		for (int a=0;a<size;a++)
		{
			cout<<*(arr+a)<<",";
		}
	}
	void Length()
	{
		cout<<endl;
		for(int i=0;i<size;i++)
		{
			count++;
		}
		cout<<"The length of array is :: "<<count<<endl;
	}
	void ADD()
	{
		cout<<"Enter the number you want to add :: ";
		cin>>*arr;
		cout<<"Enter the possition of array :: ";
		cin>>pos;
		if(pos<=0 || pos>size+1)
		{
			cout<<"Invalid condition !!!!"<<endl;
		}
		else
		{
			 for(int i=size-1;i>=pos-1;i--)
			 {
				 arr[i+1]=arr[i];
			 }
			arr[pos-1]=*arr;
			 size++;
		}
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<",";
		}
	}
};
int main()
{
	ARRAY A;
	//A.getArraySize();
	A.GetArray();
	cout<<endl;
	A.Display();
	cout<<endl;
	A.ADD();
	A.Length();
	system("pause");
	return 0;
}
