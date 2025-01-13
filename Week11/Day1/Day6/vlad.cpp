#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
    cin>>n>>k;
    for(int i=1;i<=log2(n)+1;i++){
        int x=(1<<i);
        int start=(x/2);
        int y=(n+start)/x;
        if(k<=y){
            if(k==1){
                cout<<start<<'\n';
                break;
            }
            else{
                cout<<start+((k-1)*x)<<'\n';
                break;
            }
        }
        else k-=y;
    }
    }
    return 0;
}