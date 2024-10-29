#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<string,string>> v;
    for(int i=0; i<n; i++)
    {
        string a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    vector<pair<string,string>> v1;
    sort(v.begin(),v.end());
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
    cout<<v.size();
    // for(auto i:v)
    // {
    //     cout<<i.first<<" "<<i.second<<'\n';
    // }
    // pair<string,string> p;
    // int result = 0;
    // p.first=v[0].first;
    // p.second=v[0].second;
    
    // for(int i=1; i<v.size(); i++)
    // {
    //     if(p.first!=v[i].first || p.second!=v[i].second)
    //     {
    //         result++;
    //         p.first=v[i].first;
    //         p.second=v[i].second;
    //     }
    // }
    // for(pair<string,string> i:v)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<result+1<<endl;
    // cout<<v[0].first<<" "<<v[0].second;
    return 0;
}
