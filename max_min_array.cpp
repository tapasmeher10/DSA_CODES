#include<iostream>
#include<climits>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for (int i=0;i<n;i++)
    {
        maxno=max(maxno,array[i]);
        minno=min(minno,array[i]);
    }
    cout<<maxno<<" "<<minno<<endl;
}