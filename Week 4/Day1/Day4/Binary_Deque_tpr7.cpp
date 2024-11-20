#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n,k; cin>>n>>k;
        vector<ll> v(n);
        ll sum1=0;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            sum1+=v[i];
        }
        if(sum1<k)
        {
            cout<<-1<<'\n';
        }
        else if(sum1==k)
        {
            cout<<0<<'\n';
        }
        else
        {
            ll l=0,r=0;
            ll ans=0, sum2=0;
            while(r<n)
            {
                sum2+=v[r];
                if(sum2==k)
                {
                    ans=max(ans,r-l+1);
                }
                else
                {
                    while(sum2>k)
                    {
                        sum2-=v[l];
                        l++;
                    }
                    if(sum2==k)
                    {
                        ans=max(ans,r-l+1);
                    }
                }
                r++;
            }
            cout<<n-ans<<'\n';
        }
        

    }
    return 0;
}