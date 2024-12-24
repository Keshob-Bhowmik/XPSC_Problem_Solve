#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll l,r; cin>>l>>r;
    ll x = (r-l+1)/2;
    cout<<"YES"<<'\n';
    for(ll i=0; i<x; i++)
    {
        cout<<l<<" "<<l+1<<'\n';
        l+=2;
    }

    return 0;
}