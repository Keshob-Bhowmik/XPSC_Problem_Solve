#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    deque<string> d;
    map<string,int> mp;
    for(int i=0; i<n; i++)
    {
        string a;
        cin>>a;
        d.push_front(a);
    }
    for(int i=0; i<n; i++)
    {
        if(mp[d[i]]==0)
        {
            cout<<d[i]<<'\n';
            mp[d[i]]=1;
        }
    }
    // for(int i=0; i<d.size()-1; i++)
    // {
    //     for(int j=i+1; j<d.size(); j++)
    //     {
    //         if(d[i]==d[j])
    //         {
    //             d.erase(d.begin()+j);
    //         }
    //     }
    // }
    
    
    // for(int i=0; i<n-1; i++)
    // {
    //     for(int j=i+1; j<n; j++)
    //     {
    //         if(d[i]==d[j])
    //         {
    //             int top = d
    //         }
    //     }
    // }
    return 0;
}