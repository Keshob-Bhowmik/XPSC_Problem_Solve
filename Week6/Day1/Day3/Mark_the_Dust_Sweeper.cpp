#include<bits/stdc++.h>
#define ll long long int
#define vis vector<int> v(n);
#define vi vector<int> v;
#define vls vector<ll> v(n);
#define vl vector<ll> v;
using namespace std;
int main()
{
    ll t; cin>>t;
        while(t--)
        {
            ll n; cin>>n; 
            vls
            for(ll i=0; i<n; i++)
            {
                cin>>v[i];
            }
            bool flag = false;
            ll count = 0, sum=0;
            for(ll i=0; i<n-1; i++)
            {
                if(flag==false && v[i]==0)
                {
                    continue;
                }
                else
                {
                    flag = true;
                    if(v[i]==0)
                    {
                        count++;
                    }
                    sum+=v[i];
                }
            }
            cout<<sum+count<<'\n';
        }
    return 0;
}