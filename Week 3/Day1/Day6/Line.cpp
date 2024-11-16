#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
        string s;           cin>>s;
 
        vector<ll> d;
 
        ll total=0;
        int c=0;
 
        for(int i=0;i<n;i++){
            ll L=i;
            ll R=n-i-1;
            if(s[i]=='L'){
                if(R>L){
                    c++;
                    total+=R;
                    d.push_back(R-L);
                }
                else{
                    total+=L;
                }
            }
            else{
                if(L>R){
                    c++;
                    d.push_back(L-R);
                    total+=L;
                }
                else{
                    total+=R;
                }
            }
        }
 
        vector<ll> ans(n+1);
 
        for(int i=c;i<=n;i++){
            ans[i]=total;
        }
 
        sort(d.begin(),d.end(),greater<ll>());
 
        for(int i=c-1;i>=1;i--){
            total-=d.back();
            d.pop_back();
            ans[i]=total;
        }
 
 
 
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}