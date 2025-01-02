#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    // map<ll,ll> mp;
    vector<pair<ll,ll>> v(n);
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        v[i].first=x;
        v[i].second=i+1;
        
    }
    bool flag=false;
    int indx1=0, indx2=0, indx3=0;
    sort(v.begin(),v.end());
    for(int i=0; i<n-2; i++)
    {
        int l=i+1, r=n-1;
        int sum=v[i].first;
        while(l<r)
        {
            sum+=v[l].first+v[r].first;
            // cout<<sum<<'\n';
            if(sum==k)
            {
                flag=true;
                indx1=v[i].second;
                indx2=v[l].second;
                indx3=v[r].second;
                break;
            }
            else if(sum<k)
            {
                l++;
                sum=v[i].first;
            }
            else if(sum>k)
            {
                r--;
                sum=v[i].first;
            }
            // cout<<l<<" "<<r<<'\n';
        }
        if(flag)
        {
            break;
        }
    }
    if(flag) cout<<indx1<<" "<<indx2<<" "<<indx3<<'\n';
    else cout<<"IMPOSSIBLE"<<'\n';
    // for(auto &it:mp)
    // {
    //     cout<<it.second<<" ";
    // }
    return 0;
}