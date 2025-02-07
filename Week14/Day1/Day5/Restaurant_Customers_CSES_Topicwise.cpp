#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int> dif;
    while(n--){
        int l,r;
        cin>>l>>r;
        dif[l]++;
        dif[r+1]--;
    }
    ll sum=0;
    ll mx=INT_MIN;
    for(auto [x,y]:dif){
        sum+=y;
        mx=max(sum,mx);
    }
    cout<<mx<<'\n';
}
