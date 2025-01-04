#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[i+1]=v[i];
        }
        bool flag=false;
        // for(auto &it:mp)
        // {
        //     cout<<it.first<<" "<<it.second<<'\n';
        // }
        for(auto &it:mp)
        {
            if(it.first==mp[it.second])
            {
                flag=true;
            }
            // cout<<mp[it.first]<<" "<<mp[it.second]<<'\n';
        }
        if(flag) cout<<2<<'\n';
        else cout<<3<<'\n';
    }
    return 0;
}