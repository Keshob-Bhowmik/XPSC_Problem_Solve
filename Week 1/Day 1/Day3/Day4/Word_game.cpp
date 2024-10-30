#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m=3;
        cin>>n;
        map<string, vector<int>> mp;
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                string a;
                cin>>a;
                mp[a].push_back(i);
            }
        }
        vector<int> v1(m+1);
        for(auto it=mp.begin(); it!=mp.end(); ++it)
        {
            vector<int> v = it->second;
            if(v.size()==1)
            {
                v1[v[0]]+=3;
            }
            else if(v.size()==2)
            {
                v1[v[0]]+=1;
                v1[v[1]]+=1;
            }
        }
        for(int i=1; i<v1.size(); i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}