#include<bits/stdc++.h>
using namespace std;
const int maxN=1e6+7;
vector<int> divisors(maxN);
int main()
{
    for(int i=1; i<=maxN; i++){
        for(int j=i; j<=maxN; j+=i){
            divisors[j]++;
        }
    }
    int t; cin>>t;
    while(t--){
        int x; cin>>x;
        cout<<divisors[x]<<'\n';
    }
    return 0;
}