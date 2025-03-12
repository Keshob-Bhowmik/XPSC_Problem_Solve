#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll lcm(ll a,ll b){
    ll res=(a/__gcd(a,b))*1LL*b;
    return res;
}

int main(){
    int t; cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        ll p=lcm(x,y);
        x=n/x;
        y=n/y;
        p=n/p; 
        x-=p;     
        y-=p;  
    
        ll a=(n*x)-(x*(x-1))/2;   
        ll b=(y*(y+1))/2;       
    
        cout<<a-b<<'\n';
    }

}