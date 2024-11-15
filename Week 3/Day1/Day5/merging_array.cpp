#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin>>n>>m;
    vector<int> v1(n);
    vector<int> v2(m);
    vector<int> v3;
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }
    for(int i=0; i<m; i++){
        cin>>v2[i];
    }
    int left=0, right=0;
    int index=0;
    while(left<n && right<m){
        if(v1[left]<=v2[right]){
            v3.push_back(v1[left]);
            left++;
        }
        else {
            v3.push_back(v2[right]);
            right++;
        }
    }
    while(left<n){
        v3.push_back(v1[left]);
        left++;
    }
    while(right<m){
        v3.push_back(v2[right]);
        right++;
    }
    for(auto value:v3){
        cout<<value<<" ";
    }
    return 0;
}