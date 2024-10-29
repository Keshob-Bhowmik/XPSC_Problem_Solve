#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    string s;
    vector<int> v;
    int v_size=0;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        if(s[i]=='B')
        {
            v.push_back(i);
            v_size++;
        }
    }
    if(v[0]==0) cout<<v[v_size-1]+1<<'\n';
    else cout<<(v[v_size-1]-v[0])+1<<'\n';
    }
    return 0;
}