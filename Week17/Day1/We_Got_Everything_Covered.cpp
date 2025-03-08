#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
    int n,k; cin>>n>>k; 

    int sz=n*k;

    char ch='a';
    
    char v[sz];
    for(int i=0;i<k;i++){
        for(int j=i;j<sz;j+=k){
            v[j]=ch;
        }
        ch++;
    }

    for(char value:v) cout<<value;

    cout<<'\n';
    }
}