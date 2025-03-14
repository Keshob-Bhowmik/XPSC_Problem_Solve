#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    map<int,int> mp;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    if(k==1){
    cout<<"YES"<<'\n';
        continue;
    }
    if(k==2){
        if(v[0]==v[n-1]){
             cout<<"YES"<<'\n';
            continue;
        }
    }
    int left_need=k,right_need=k;
    if(v[0]==v[n-1]){
        left_need/=2;
        right_need-=left_need;
    }
    int l=0,r=0;
    int left=0;
    for(int i=0;i<n;i++){
        if(v[i]==v[0]) l++;
        if(l==left_need) break;
        left++;
    }
    int right=n-1;
    for(int i=n-1;i>=0;i--){
        if(v[i]==v[n-1]) r++;
        if(r==right_need) break;
        right--;
    }
    if(left<right)  cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    }
}
