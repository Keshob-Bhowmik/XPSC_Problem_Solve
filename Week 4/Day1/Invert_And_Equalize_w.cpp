#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        string a;
        cin>>a;
        ll c1=0,c0=0,c11=0,c00=0;
        bool t1=false, t0=false;
        vector<ll> v1,v0;
        for(ll i=0; i<n; i++)
        {
            if(a[i]=='0')
            {
                if(t0==false && a[i+1]=='1')
                {
                    c0++;
                    v0.push_back(c0);
                }
                else if(a[i]==a[i+1])
                {
                    c00++;
                    t0=true;
                }
                else
                {
                    t0=false;
                    v0.push_back(c00);
                    c00=0;
                    c0=0;
                }
            }
            else if(a[i]=='1')
            {
                if(t1==false && a[i+1]=='0')
                {
                    c1++;
                    v1.push_back(c1);
                }
                else if(a[i]==a[i+1])
                {
                    c11++;
                    t1=true;
                }
                else
                {
                    t1=false;
                    v1.push_back(c11);
                    c1=0;
                    c11=0;
                }
            }
        }
        ll mn=min(v1.size(),v0.size());
        cout<<mn<<'\n';
        // for(auto val1:v1)
        // {
        //     cout<<val1<<" ";
        // }
        // cout<<'\n';
        // for(auto val0:v0)
        // {
        //     cout<<val0<<" ";
        // }
    }
    return 0;
}