#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--){
        ll a,b,c; cin>>a>>b>>c;
        ll ans1=abs(a-1);
        ll ans2=abs(b-c)+abs(c-1);
        if(ans1<ans2) cout<<1<<'\n';
        else if(ans1>ans2) cout<<2<<'\n';
        else if(ans1==ans2) cout<<3<<'\n';
    }
    return 0;
}