#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if((n%2)!=0)
        {
            int a=(n/2);
            int k=1;
            cout<<a+1<<'\n';
            int loop=1;
            int l=1,r=n*3;
            while(loop<=a+1)
            {
                cout<<l<<" "<<r<<'\n';
                l+=3, r-=3;
                loop++;
            }
        }
        else if((n%2)==0)
        {
            int a=(n/2);
            int k=1;
            cout<<a<<'\n';
            int loop=1;
            int l=1,r=n*3;
            while(loop<a+1)
            {
                cout<<l<<" "<<r<<'\n';
                l+=3, r-=3;
                loop++;
            }
            // cout<<k+1<<" "<<k+2<<'\n';
        }
    }
    return 0;
}