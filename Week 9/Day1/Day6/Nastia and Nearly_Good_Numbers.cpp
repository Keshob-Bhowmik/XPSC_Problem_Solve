#include <bits/stdc++.h>
#define ll long long
using namespace std;  
int main()
{
    ll t; cin>>t;
    while(t--)
    {
    ll A,B; cin>>A>>B;
    if(B!=1){
        cout<<"YES"<<"\n";
        cout<<(A*B)<<" "<<A<<" "<<(B+1LL)*A<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    }
    return 0;
}