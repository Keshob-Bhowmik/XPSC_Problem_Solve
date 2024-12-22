#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
        while(t--)
        {
            int n; cin>>n;
            vector<int> v(n);
            for(int i=0; i<n; i++)
            {
                cin>>v[i];
            }
            int ans=INT_MAX;
            for(int i=1; i<n-1; i++)
            {
                // cout<<abs(v[i-1]-v[i])<<" "<<abs(v[i]-v[i+1])<<" "<<ans<<'\n';
                int mn = max(abs(v[i-1]-v[i]),abs(v[i]-v[i+1]));
                ans = min(mn,ans);
            }
            cout<<ans<<'\n';
        }
    return 0;
}