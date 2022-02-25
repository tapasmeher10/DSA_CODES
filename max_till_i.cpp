//Given an array a[] of size n.For every i from 0 to n-1 output max(a[0],a[1],....,a[i]).

#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int mx=-1999999999;
    for(int i=0;i<n;i++)
    {
       mx=max(mx,arr[i]);
       cout<<mx<<endl;
    }
    return 0;
}