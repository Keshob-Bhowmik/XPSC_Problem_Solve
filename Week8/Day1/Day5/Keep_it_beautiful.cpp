#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int flag=0,check=-1,l=-1,x;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            if(flag==1)
            {
                if(x>=l && x<=check)
                {
                    l=x;
                    cout<<1;
                }
                else
                {
                    cout<<0;
                }
            }
            else
            {
                if(check==-1)
                {
                    check=x;
                    l=x;
                }
                if(x>=l)
                {
                    l=x;
                    cout<<1;
                }
                else if(check>=x)
                {
                    l=x;
                    cout<<1;
                    flag=1;
                }
                else
                {
                    cout<<0;
                }
            }
        }
        cout<<'\n';
    }
}