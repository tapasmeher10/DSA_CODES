#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

vector<int> Solution::solve(vector<int> &A) {
    int t = A.size();
    vector<int> resu;
    int low =0
    int high=t-1
    while (low<high)
    {
         if(A[r]%A[s]==0 || A[s]%A[r]==0)
            {
                cont++;
            }
    }
    
    for(int r = 0; r<t; r++)
    {
        int cont = 0;
        for(int s=0; s<t; s++)
        {
            if(A[r]%A[s]==0 || A[s]%A[r]==0)
            {
                cont++;
            }
        }
        resu.push_back(cont-1);
    }
    return resu;
}