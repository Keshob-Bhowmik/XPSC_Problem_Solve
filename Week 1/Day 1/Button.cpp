#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<(2*a)-1<<endl;
    }
    else if(b>a)
    {
        cout<<(2*b)-1<<endl;
    }
    else if(a==b)
    {
        cout<<(2*a)<<endl;
    }
    return 0;
}