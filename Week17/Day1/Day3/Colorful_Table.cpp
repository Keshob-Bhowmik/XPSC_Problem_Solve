#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    vector<vector<int>> pos(k);
    set<int> st;

    for(int i=0;i<n;i++){
        pos[v[i]-1].push_back(i);  
        st.insert(i);
    }

    vector<int> ans(k);
    for(int i=0;i<k;i++){
        if(!pos[i].size()) continue;

        ans[i]= 2*(*st.rbegin()-*st.begin()+1);
        for(auto value:pos[i]){  
            st.erase(value);
        }
    }
    for(int value:ans) cout<<value<<" ";
    
    cout<<'\n';
    }
}
