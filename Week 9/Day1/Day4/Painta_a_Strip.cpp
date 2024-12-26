#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(n==1 or n==2) cout<<n<<'\n';
        else
        {
            int op_one=1;
            int x=1;
            while(x<n)
            {
                x*=2;
                x+=2;
                op_one++;
            }
            cout<<op_one<<'\n';
        }
    }
    return 0;
}