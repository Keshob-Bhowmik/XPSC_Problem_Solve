#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<string,int> mp;
    while(t--)
    {
        string a;
        cin>>a;
        if(mp.find(a)==mp.end())
        {
            mp[a]=1;
            cout<<"OK"<<'\n';
        }
        else
        {
            cout<<a<<mp[a]<<'\n';
            mp[a]++;
        }
    }
    // for(auto &it:mp)
    // {
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }
    return 0;
}