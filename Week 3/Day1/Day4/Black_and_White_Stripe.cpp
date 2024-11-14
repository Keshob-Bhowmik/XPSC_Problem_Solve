#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n,k; cin>>n>>k;
        string a;
        cin>>a;
        ll l=0, r=0;
        ll ans=INT_MAX;
        ll c=0;
        while(r<a.size())
        {
            if(a[r]=='W')
            {
                c++;
            }
            if(r-l+1==k)
            {
                ans=min(ans,c);
                if(a[l]=='W')
                {
                    c--;
                }
                l++;
            }
            r++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}