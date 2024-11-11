//Alt_tab
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    vector<string>s;
    while(t--){
        
        string s1; cin>>s1;
        s.push_back(s1);
    }
    map<string,int>mp;
    string ans;
    for(int i=s.size()-1; i>=0; i--){
        if(mp[s[i]]==0){
            string p=s[i];
            ans.push_back(p[p.size()-2]);
            ans.push_back(p[p.size()-1]);
            mp[s[i]]=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}