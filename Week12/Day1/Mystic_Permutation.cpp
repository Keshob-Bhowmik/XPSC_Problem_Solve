#include<bits/stdc++.h>
#define ll long long int
#define duronto ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define oy cout<<"YES"<<'\n'
#define na cout<<"NO"<<'\n'
using namespace std;
void keshob(){
    ll n; cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<-1<<'\n';
        return;
    }
    vector<ll> v1(n);
    v1=v;
    sort(v1.begin(),v1.end());
    for(int i=0; i<n; i++){
        if(v1[i]==v[i]){
            if(i==0){
                swap(v1[i],v1[i+1]);
            }
            else if(i==n-1){
                swap(v1[i], v1[i-1]);
            }
            else{
                swap(v1[i],v1[i+1]);
            }
        }
    }
    for(auto value:v1){
        cout<<value<<" ";
    }
    cout<<'\n';
}
int main()
{
    duronto;
    int t; cin>>t;
    while(t--) keshob();
    return 0;
}