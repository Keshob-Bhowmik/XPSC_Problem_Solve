#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int> mp;
    for(int i=0; i<n; i++)
    {
        string a;
        cin>>a;
        mp[a];
        if(mp[a]==0)
        {
            cout<<"NO"<<'\n';
            mp[a]++;
        }
        else
        {
            cout<<"YES"<<'\n';
        }
    }
    return 0;
}