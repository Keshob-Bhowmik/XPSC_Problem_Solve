#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll a,b,n,s; cin>>a>>b>>n>>s;
        ll p,q;
        p=s/n;
        q=s%n;
        if(q<=b && a*n+b>=s){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}