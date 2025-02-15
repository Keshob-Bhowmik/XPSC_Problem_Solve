#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void keshob(){
    string a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"YES"<<'\n';
        cout<<a<<'\n';
        return;
    }
    char x,y;
    bool flag=false;
    for(int i=0;i<a.size()-1;i++){
        for(int j=0;j<b.size()-1;j++){
            if(a[i]==b[j] && a[i+1]==b[j+1]){
                x=a[i];
                y=a[i+1];
                flag=true;
                break;
            }
        }
        if(flag) break;
    }
    if(flag){
        cout<<"YES"<<'\n';
        cout<<"*"<<x<<y<<"*"<<'\n';
    }
    else{
        if(a[0]==b[0]){
            cout<<"YES"<<'\n';
            cout<<a[0]<<"*"<<'\n';
        }
        else if(a[a.size()-1]==b[b.size()-1]){
            cout<<"YES"<<'\n';
            cout<<"*"<<a[a.size()-1]<<'\n';
        }
        else cout<<"NO"<<'\n';
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        keshob();
    }
}