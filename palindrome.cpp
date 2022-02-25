#include<iostream>
using namespace std;
int main()
{
    int n,num,rev=0,digit;
    cout<<"Enter a number"<<endl;
    cin>>num;
    n=num;

    while(num!=0)
    {
        digit =num%10;
        rev=(rev*10)+digit;
        num=num/10;

    }
    if(n==rev)
    {
        cout<<"The number is palindrone.";
    }
    else
    {
        cout<<"It is not";

    }
    return 0;


}