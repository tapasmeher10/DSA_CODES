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

    int current=0;
    for (int i = 0;i<n; i++)
    {
        current=0;
        for (int j = i; j < n; j++)
        {
            current+=arr[j];
            cout<<current<<endl;
        }
        
    }
    return 0;
}