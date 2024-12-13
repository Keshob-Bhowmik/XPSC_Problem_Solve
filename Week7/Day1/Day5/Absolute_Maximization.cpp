#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int x=0,y=2047;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            x|=v[i];
            y&=v[i];
        }
        cout<<x-y<<endl;
    }
}