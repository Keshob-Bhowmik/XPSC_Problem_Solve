#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<int> v(n);
    ll sum=0;
    ll mn = INT_MAX;
    ll count = 0;
    
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if((v[i]%2)!=0)
        {
            if(v[i]<mn)
            {
                mn=v[i];
            }
            sum+=v[i];
            count++;
        }
        else
        {
            sum+=v[i];
        }
    }
    // cout<<mn;
    if((count%2)!=0) cout<<sum-mn;
    else cout<<sum;
    return 0;
}