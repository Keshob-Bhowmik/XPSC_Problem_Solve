#include<bits/stdc++.h>
#define ll long long int
#define duronto ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ek for(int i=1; i<=n; i++)
#define shunno for(int i=0; i<n; i++)
#define pb push_back
#define oy cout<<"YES"<<'\n'
#define na cout<<"NO"<<'\n'
using namespace std;
int main()
{
    duronto;
    int n; cin>>n;
    int x = n/2;
    if(n%2==0){
        cout<<x<<'\n';
        for(int i=1; i<=x; i++){
            cout<<2<<" ";
        }
        cout<<'\n';
    }
    else{
        cout<<x<<'\n';
        for(int i=1; i<x; i++){
            cout<<2<<" ";
        }
        cout<<3<<'\n';
    }
    return 0;
}

// #include<bits/stdc++.h>
// #define ll long long int
// #define duronto ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define ek for(ll i=1; i<=n; i++)
// #define shunno for(ll i=0; i<n; i++)
// #define pb push_back
// #define oy cout<<"YES"<<'\n'
// #define na cout<<"NO"<<'\n'
// using namespace std;
// const long long int maxN=1e9+7;
// vector<ll> allprime;
// // vector<ll> divisor[maxN];
// vector<bool> prime(maxN+1, true);
// void seive(){
    
//     for(ll i=2; i*i<=maxN; i++){
//         if(!prime[i]){
//             for(ll j=i+i; j<=maxN; j+=i){
//                 prime[j]=true;
//             }
//         }
//     }
//     // for(ll i=0; i<maxN; i++){
//     //     if(prime[i]){
//     //         allprime.pb(i);
//     //     }
//     // }
//     // for(ll i=1; i<maxN; i++){
//     //     for(ll j=i; j<maxN; j+=i){
//     //         divisor[j].pb(i);
//     //     }
//     // }

// }
// int main()
// {
//     duronto;
//     seive();
//     int t; cin>>t;
//     while(t--){
//         ll d; cin>>d;
//     vector<ll> v(maxN);
//     ll first=1+d;
//     ll second, third;
//     // cout<<1<<" ";
//     ll count=0;
//     for(ll i=0; i<2; i++){
//         if(prime[first]){
//             // cout<<first<<" ";
//             if(i==0){
//                 second=first;
//             }
//             else if(i==1){
//                 third=first;
//             }
//             // first+=d;
//         }
//         else{
//             while(true){
//                 first++;
//                 if(prime[first]==true){
//                     // cout<<first<<" ";
//                     if(i==0){
//                 second=first;
//             }
//             else if(i==1){
//                 third=first;
//             }
//                     break;
//                 }
//             }
//             // first+=d;
//         }
//         first+=d;
//     }
//     cout<<second*third<<'\n';
//     }
    
//     return 0;
// }