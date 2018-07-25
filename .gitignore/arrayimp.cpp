#include <iostream>
using namespace std;
int stak[5] = {};
int size = 5;
void push(int arr[], int size)
{
    int count = 0;
    int numToAdd = 0;
    while(count < size)
    {
        cout<<"Enter a positive number to push into stack (can only add 5 nums): "<<endl;
        cin>>numToAdd;
        arr[count] = numToAdd;
        count++;
    }
}
void pop(int arr[], int size)
{
    for(int x = (size - 1); x >= 0; x--)
    {
        cout<<"Popped element: "<<arr[x]<<endl;
    }
    
}
int main()
{
    
    push(stak,size);
    pop(stak,size);

    
    return 0;
    
}
