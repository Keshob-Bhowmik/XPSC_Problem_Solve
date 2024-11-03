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
        string a;
        cin>>a;
        string b="Timur";
        sort(b.begin(),b.end());
        sort(a.begin(),a.end());
        if(a==b) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}