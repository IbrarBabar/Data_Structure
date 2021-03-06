//(exchange sort)
#include <iostream>
#include<conio.h>

using namespace std;

#define ARRAY_SIZE 5
 
int main()
{
    int numbers[ARRAY_SIZE], i ,j ,temp;

	cout<<"Simple C++ Example Program for Sorting (Asending Order) In Array\n";

	// Read Input
    for (i = 0; i < ARRAY_SIZE; i++)
    {
		cout<<"Enter the Number : "<< (i+1) <<"  : ";
        cin>>numbers[i];
    }
        
    // Array Sorting - Asensding Order
    for (i = 0; i < ARRAY_SIZE; ++i)
    {
        for (j = i + 1; j < ARRAY_SIZE; ++j)
        {
            if (numbers[i] > numbers[j])
            {
                temp =  numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    cout<<"Sorting Order Array: \n";
    for (i = 0; i < ARRAY_SIZE; ++i)
        cout<<numbers[i]<<endl;
        
	getch();
    return 0;
}
