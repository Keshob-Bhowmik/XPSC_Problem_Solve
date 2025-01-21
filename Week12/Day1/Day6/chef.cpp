#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll t; cin>>t;
   while(t--){
      ll a,b; cin>>a>>b;
      ll g = __gcd(a,b);
      bool flag = true;
      while(b!=1){
         if(g==1){
            flag=false;
            break;
         }
         b/=g;
         g=__gcd(g,b);
      }
      if(flag) cout<<"YES"<<'\n';
      else cout<<"NO"<<'\n';
   }
   return 0;
}