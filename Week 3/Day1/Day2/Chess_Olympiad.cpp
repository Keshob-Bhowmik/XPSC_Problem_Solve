#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z; cin>>x>>y>>z;
    int own=0, opo=0;
    int remains=4-(x+y+z);
    own=x+(y/2)+remains;
    opo=z+(y/2);
    if(own<=opo) cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
    return 0;
}