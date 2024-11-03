#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    deque<ll> d;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        d.push_back(a);
        if(d.back()==k)
        {
            d.pop_back();
        }
    }
    if(d.size()==0)
    {
        cout<<'\n';
    }
    else
    {
        for(auto &it:d)
    {
        cout<<it<<" ";
    }
    }
    
    return 0;
}