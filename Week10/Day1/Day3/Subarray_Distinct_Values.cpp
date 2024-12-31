#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int l=0, r=0;
    int count=0;
    ll ans=0;
    map<int,int> mp;
    while(r<n)
    {
        mp[v[r]]++;
        if(mp.size()<=k)
        {
            ans+=r-l+1;
        }
        else if(mp.size()>k)
        {
            while(mp.size()>k && l<=r)
            {
                mp[v[l]]--;
                if(mp[v[l]]==0)
                {
                    mp.erase(v[l]);
                }
                l++;
            }
            ans+=r-l+1;
        }
        r++;
    }
    cout<<ans<<'\n';
    return 0;
}