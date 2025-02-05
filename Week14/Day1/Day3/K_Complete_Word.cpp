#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int ans=0;
    for(int i=0;i<k/2;i++){
        vector<int> freq(26,0);
        for(int j=0;j+k-1<n;j+=k){
            int l=j+i;
            int r=j+(k-1-i);
            freq[s[l]-'a']++;
            freq[s[r]-'a']++;
        }
        int r=2*(n/k);
        int mx=*max_element(freq.begin(),freq.end());
        ans+=(r-mx);
    }
    if(k%2==1){
        vector<int> freq(26,0);
        for(int i=k/2;i<n;i+=k){
            freq[s[i]-'a']++;
        }
        int r=n/k;
        int mx=*max_element(freq.begin(),freq.end());
        ans+=(r-mx);
    }
    cout<<ans<<'\n';
    }
}
