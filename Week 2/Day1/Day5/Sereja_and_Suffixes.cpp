#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,m; cin>>n>>m;
    set<int> s;
    vector<int> v(n);
    vector<int> v1(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=n-1; i>=0; i--)
    {
        s.insert(v[i]);
        v1[i]=s.size();
    }
    while(m--)
    {
        int l; cin>>l;
        cout<<v1[l-1]<<'\n';
    }  
    return 0;
}