#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {

     int one,two;
    cin>>one>>two;
    int count=0;
    while(one>0||two>0){
        if(two>=2){
            one-=7;
            two-=2;
            count++;
        }
        else if(two==1){
            one-=11;
            two-=1;
            count++;
        }
        else{
            one-=15;
            count++;
        }
    }
    cout<<count<<"\n";
    }
    return 0;
}
// 7 2
// 12 4
// 0 3
// 1 0
// 8 1
// 0 0
// 2 0
// 15 0
// 8 2
// 0 9