#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int r1,r2;
        cin>>n;
        string a,b;
        cin>>a>>b;
        for(int i=0; i<n-1; i++)
        {
            if((a[i]=='G' && b[i]=='B') || (a[i]=='B' && a[i]=='G'))
            {
                a[i]=b[i];
            }
        }
        
        
        if(a==b)
        {
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}