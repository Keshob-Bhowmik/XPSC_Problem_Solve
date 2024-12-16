#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        ll b,c,d;
        cin>>b>>c>>d;
        ll a=(c^d);
        if((a|b)-(a&c)==d) 
        {
            cout<<a<<'\n';
        }
        else 
        {
            cout<<-1<<'\n';
        }
    }
    return 0;
}