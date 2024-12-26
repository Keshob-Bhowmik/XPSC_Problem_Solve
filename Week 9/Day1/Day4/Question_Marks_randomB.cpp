#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; 
        cin>>s;
        map<char,int> mp;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='?') continue;
            mp[s[i]]++;
        }
        int sum=0;
        for(auto &it:mp)
        {
            // cout<<it.first<<" "<<it.second;
            if(it.second>=n) sum+=n;
            else sum+=it.second;
        }
        // cout<<'\n';
        cout<<sum<<'\n';
    }
    return 0;
}