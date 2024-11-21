#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> v(n);
        vector<char> v1(n);
        vector<ll> prefix(n);
        deque<ll> l;
        deque<ll> r;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(ll i=0; i<n; i++)
        {
            cin>>v1[i];
            if(v1[i]=='L'){
                l.push_back(i);
            }
            else 
            {
                r.push_back(i);
            }
        }
        prefix[0]=v[0];
        for(ll i=1; i<n; i++)
        {
            prefix[i]=prefix[i-1]+v[i];
        }
        ll ls=0, rs=r.size()-1;
        ll sum = 0;
        while(l.size()>0 && r.size()>0)
        {
            if(l.front()<r.back())
            {
                if(l.front()==0)
                {
                    sum+=prefix[r.back()];
                    l.pop_front();
                    r.pop_back();
                }
                else{
                    ll s=prefix[r.back()]-prefix[l.front()-1];
                    sum+=s;
                    l.pop_front();
                    r.pop_back();
                }
            }
            else if(l>r)
            {
                break;
            }
        }
        cout<<sum<<'\n';
    }
    return 0;
}