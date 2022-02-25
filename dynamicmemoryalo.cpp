#include<iostream>
 using namespace std;

 int main()
 {
     int size;
     int *poi;

     cout<<"Enter the size of the array"<<endl;
     cin>>size;

     poi= new int[size];
     cout<<"Enter the value to be stored in array"<<endl;

     for (int i = 0; i < size; i++)
     {
         cin>>poi[i];
     }
     cout<<"Values in array:"<<endl;

     for (int i = 0; i < size; i++)
     {
        cout<<poi[i]<<endl;
     }
     return 0;
 }