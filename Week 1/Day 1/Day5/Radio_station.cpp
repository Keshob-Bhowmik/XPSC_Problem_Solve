#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,m; 
    cin>>n>>m;
    map<string,string> mp1;
    for(int i=0; i<n; i++)
    {
        string a,b;
        cin>>a>>b;
        mp1[b]=a;
    }
    // for(auto &it:mp1)
    // {
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    for(int i=0; i<m; i++)
    {
        string a,b;
        cin>>a>>b;
        b.pop_back();
        cout<<a<<" "<<b<<";"<<" "<<"#"<<mp1[b]<<'\n';
        // cout<<mp1[b]<<endl;
    }
    return 0;
}