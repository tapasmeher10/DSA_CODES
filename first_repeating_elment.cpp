#include "bits/stdc++.h"
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

    const int N=100 ;
    int a[N];

    for(int i=0;i<N;i++)
    {
        a[i]=-1;
    }

    int mid=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[arr[i]]!= -1)
        {
            mid=min(mid,a[arr[i]]);
        }
        else
        {
            a[arr[i]]=i;
        }
    }
    if(mid==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<mid+1<<endl;
    }
    return 0;
}