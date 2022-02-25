#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int t;
    cin>>t;
    int counter=0;
    for(int i=0;i<t;i++)
    {
        int G;
        cin>>G;
        int sum=0;

        for(int j=1;j<=10;j++)
        {
            if(j==G)
            {
                counter=counter+1;
            }
            else
            {
                sum=sum+j;
                if(sum==G);
                {
                    counter=counter+1;
                }
            }
        }
    }

    cout<<counter<<endl;
    
    return 0;
}