#include<iostream>
using namespace std;

int main()
{
    int size;
    int *arr;

    cout<<"Enter the size of array"<<endl;
    cin>>size;

    // dynamically memory allocated
    arr = new int[size];

    cout<<"Enter numbers for checking the array is sorting or not"<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=1;i<size;i++){
        if(arr[i]<arr[i-1]){
            cout<<"number is not sorted"<<endl;
        }else{
            cout<<"number is sorted ";
        }
    }
    return 0;

}