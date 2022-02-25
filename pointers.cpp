#include<iostream>
using namespace std;
int main()
{
    int var = 5;
    int *ip;
    
    ip=&var;

    cout<<"Value of var is:"<<var<<endl;
    cout<<"address of pointer"<<ip<<endl;
    cout<<"value of pointer is :"<<*ip<<endl;


    return 0;
}