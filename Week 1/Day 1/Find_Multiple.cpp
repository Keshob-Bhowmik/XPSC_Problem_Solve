#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll mul = c;
    ll ans;
    while(true)
    {
        if(mul>=a && mul<=b)
        {
            ans=mul;
            break;
        }
        else if(mul>b)
        {
            ans=-1;
            break;
        }
        mul+=mul;
    }
    cout<<ans<<endl;
    return 0;
}