#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int c1=0, c0=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1') c1++;
            else c0++;
        }
        int turn =0;
        if(c1==0 || c0==0)
        {
            cout<<"Ramos"<<'\n';
        }
        else
        {
            // cout<<c1<<" "<<c0<<'\n';
        while(true)
        {
            c1--, c0--;
            turn++;
            if(c1==0 || c0==0)
            {
                break;
            }
        }
        // cout<<turn<<'\n';
        if((turn%2)==0)
        {
            cout<<"Ramos"<<'\n';
        }
        else
        {
            cout<<"Zlatan"<<'\n';
        }
        }
    }
    return 0;
}