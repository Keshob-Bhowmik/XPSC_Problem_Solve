#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        map<char,int> mp;
        for(int i=1; i<=26; i++){
            mp[96+i]=0;
        }
        // for(auto &it:mp){
        //     cout<<it.first<<'\n';
        // }
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(int i=0; i<n; i++)
        {
            for(auto &it:mp){
                if(it.second==v[i])
                {
                    cout<<it.first;
                    it.second++;
                    break;
                }
            }
        }
        cout<<'\n';
    }
    return 0;
}