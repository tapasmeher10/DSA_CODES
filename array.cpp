#include<iostream>
using namespace std;

int main()
{
    int arr[6];

    cout<<"Enter 3 number to store in array: ";
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
    
    
}