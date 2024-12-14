#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<int> v;
        int x;
        while(n)
        {
            x=n%4;
            if( x==0 || x==2 )
            {
                v.push_back(0);

            }
            else if(x==3)
            {
                v.push_back(-1);
                n++;
            }
            else
            {
                v.push_back(1);
            }
            n/=2;
        }
        cout<<v.size()<<'\n';
        for(auto val:v)
        {
            cout<<val<<" ";
        }
        cout<<'\n';
    }
}