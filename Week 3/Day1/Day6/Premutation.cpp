#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[101][101];
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<n; j++)
            {
                cin>>a[i][j];
            }
        }
        int a1=a[1][1];
        if(a1!=a[2][1])
            a1=a[3][1];
        cout<<a1<<" ";
        // for(int i=1; i<=n; i++)
        // {
        //     {
        //         for(int j=1; j<n; j++)
        //             if(a[i][1]!=a1)
        //                 cout<<a[i][j]<<" ";
        //     }
        // }
        // cout<<'\n';
    }
}