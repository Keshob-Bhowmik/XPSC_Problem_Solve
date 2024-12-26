#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(abs((i+1)-v[i])==0) continue;
            if((abs((i+1)-v[i])%k)!=0) count++;
        }
        if(count==0) cout<<0<<'\n';
        else if(count<=2) cout<<1<<'\n';
        else cout<<-1<<'\n';
    }
    return 0;
}