#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        char a,n;
    cin>>a>>n;
    for(char i='1';i<'9';i++){
        if(i!=n){
            cout<<a<<i<<'\n';
        }
    }
    for(char i='a';i<='h';i++){
        if(i!=a){
            cout<<i<<n<<'\n';
        }
    }
    }
}