#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b; cin>>a>>b;
        int mn=min(a,b);
        cout<<(mn%3)<<'\n';
    }
    return 0;
}