#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool vowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
    else return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    cin>>a>>b;
    if(a.size()!=b.size()){
        cout<<"No"<<'\n';
        return 0;
    }
    for(int i=0;i<a.size();i++){
        if(vowel(a[i])!=vowel(b[i])){
            cout<<"No"<<'\n';
            return 0;
        }
    }
    cout<<"Yes"<<'\n';
}