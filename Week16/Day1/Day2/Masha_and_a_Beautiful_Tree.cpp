#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int maxM=300000;
vector<int> v(maxM);

int fun(int l,int r){
    if(r-l==1) return 0;    
    int mid=l+(r-l)/2;
    int val1=*max_element(v.begin()+l,v.begin()+mid);
    int val2=*max_element(v.begin()+mid,v.begin()+r);
    int ans=0;
    if(val1>val2){
        ans++;
        int x=(mid-l);
        for(int i=0;i<x;i++){
            swap(v[l+i],v[mid+i]);
        }
    }

    return fun(l,mid) + fun(mid,r) + ans;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        s[i]=v[i];
    }
    int ans=fun(0,n);
    sort(s.begin(),s.end());
    bool flag = true;
    for(int i=0;i<n;i++){
        if(s[i]!=v[i]){
           flag=false;
            break;
        }
    }
    if(flag) cout<<ans<<'\n';
    else cout<<-1<<'\n';
    }
}
