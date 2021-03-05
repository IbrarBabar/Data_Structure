#include<iostream>

using namespace std;

class Queue
{
    private:
        int *arr;
        int *front;
        int *rear;
        int size; //size of the array
        int noElements; //elements in the array
    public:
        Queue(int sz)
        {
            size = sz;
            arr = new int[size];
            front = arr; 
            rear = arr;
            noElements = 0;
        }

        bool isFull()
        {
            if(noElements == size)
                return true;
            else
                return false;
        }

        bool isEmpty()
        {
            if(noElements == 0)
                return true;
            else
                return false;
        }

        void enqueue(int val) //insertion
        {
            if(isFull()) //Check if full
            {
                cout<<"Queue Overflow!"<<endl;
                return;
            }
			int *si;
			si=&size-1;
            if(rear == si)
                rear = 0;
            else
                rear++;
            
            *rear = val;
            cout<<"enqueue rear val : "<<*rear<<endl;
            noElements++;
        }

        int dequeue()
        {
            if(isEmpty())
            {
                cout<<"Queue Underflows!"<<endl;
                return -1; //to indicate value not found
            }

            int *val = front;
            noElements--;
			int *si=&size-1;
            if(front == si)
                front = 0;
            else 
                front++;
            cout<<"dequeue val : "<<*val<<endl;
		    return *val;
        }

        int peek()
        {
            if(isEmpty())
            {
                cout<<"Queue is Empty, nothing to peek at!"<<endl;
                return -1; //to indicate value not found
            }

            return *front;
        }

        ~Queue()
        {
            delete []arr;
        }
};

int main()
{
    Queue q(3);
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(3);
    cout<<q.dequeue()<<endl;
    q.enqueue(1);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
}
