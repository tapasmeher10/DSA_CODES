#include<iostream>
using namespace std;

int main()
{
     #ifndef ONLIE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif

    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"this is not prime"<<endl;
            break;
        }
    }
    if (i==n)
    {
        cout<<"This is prime"<<endl;
    }
    
}