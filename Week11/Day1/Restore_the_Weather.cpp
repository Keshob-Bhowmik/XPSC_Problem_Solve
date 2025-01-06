#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t; cin>>t; 
    while(t--){
       int n,k; cin>>n>>k;
       vector<int> v(n),v1(n),v2(n);
       vector<pair<int,int>>indx(n);
       map<int,int> mp;
       for(int i=0; i<n; i++)
       {
        cin>>v[i];
        // mp[v[i]]=i;
        indx[i].first=v[i];
        indx[i].second=i;
       }
       for(int i=0; i<n; i++)
       {
        cin>>v1[i];
       }
    //    for(auto &it:mp)
    //    {
    //     cout<<it.<<" ";
    //    }
       sort(indx.begin(),indx.end());
       sort(v1.begin(),v1.end());
       int c=0;
    //    for(auto value:indx)
    //    {
    //         // cout<<value.first<<" "<<value.second<<'\n';
    //    }
       while(true)
       {
        // cout<<mp[v.back()]<<'\n';
          v2[indx.back().second]=v1.back();
          indx.pop_back();
          v1.pop_back();
          if(indx.size()==0)
          {
            break;
          }
       }
       for(auto value:v2){
        cout<<value<<" ";
       }
       cout<<'\n';
    }
    return 0;
}