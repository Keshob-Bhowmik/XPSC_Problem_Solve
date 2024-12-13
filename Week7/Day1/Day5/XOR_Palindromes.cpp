#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int count=0;
        for(int i=0; i<n/2; i++)
        {
            if(s[i]!=s[n-1-i])
            {
                count++;
            }
                
        }
        for(int i=0; i<=n; i++)
        {
            if(i>=count && ((i-count)%2==0 || n%2) && i<=n-count)
            {
                cout<<'1';
            }
                
            else
            {
                 cout<<'0';
            }
               
        }
        cout<<'\n';
    }
}