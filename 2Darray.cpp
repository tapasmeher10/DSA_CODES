#include<iostream>
using namespace std;

int main()
{
    int arr1[2][2];
    int arr2[2][2];
    int addition[2][2];
    int substraction[2][2];
    cout<<"Enter 4 numbers"<<endl;
    for(int i=0;i<2;i++)
    {
        for (int j=0; j<2; i++)
        {
            cin>>arr1[i][j];
        }
        
    }
    cout<<"Enter 4 numbers"<<endl;
    for(int i=0;i<2;i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr2[i][j];
        }
        
    }

    for(int i=0;i<2;i++)
    {
        for (int j = 0; j < 2; j++)
        {
            addition[i][j]=arr1[i][j]+arr2[i][j];
        }
        
    }
    for(int i=0;i<2;i++)
    {
        for (int j = 0; j < 2; j++)
        {
            substraction[i][j]=arr1[i][j]-arr2[i][j];
        }
        
    }
    cout<<"addition is "<<endl;
    for(int i=0;i<2;i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<addition[i][j];
        }
    }
    cout<<"Substraction is";

    for(int i=0;i<2;i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<substraction[i][j];
        }
    }
    return 0;
}