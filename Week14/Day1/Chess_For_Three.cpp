#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
    int a,b,c; cin>>a>>b>>c;
    int sum=a+b+c;
    if(sum%2==1){
        cout<<-1<<'\n';
        continue;
    }
    if(a+b<=c && c!=0){
        cout<<a+b<<'\n';
        continue;
    }
    int draws=sum/2;
    cout<<draws<<'\n';
    }
}