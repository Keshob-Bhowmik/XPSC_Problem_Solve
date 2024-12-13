#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a,y; cin>>y;
        for(int i=2; i<=n; i++)
        {
            cin>>a;
            y=y&a;
        }
        cout<<y<<'\n';
    }
}