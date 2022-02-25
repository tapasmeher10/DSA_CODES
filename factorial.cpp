#include<iostream>
using namespace std;

int main(){
    int x,fact;
    cout<<"Enter a Number"<<endl;
    cin>>x;
    fact=x;

    while (x>1)
    {
        x--;
        fact=fact*x;
    }
    cout<<"factorial of the number "<<x <<" is = "<<fact;
    return 0;
    

}