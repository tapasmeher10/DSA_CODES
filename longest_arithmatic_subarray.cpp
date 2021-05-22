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

    int pd=arr[1]-arr[0];
    int ans=2;
    int current=2;
    int j=2;

    while (j<n)
    {
        if (pd==arr[j]-arr[j-1])
        {
            current++;
        }
        else
        {
            pd=arr[j]-arr[j-1];
            current =2;
        }

        ans=max(ans,current);
        j++;
    }
    
    cout<<ans<<endl;
    return 0;

}