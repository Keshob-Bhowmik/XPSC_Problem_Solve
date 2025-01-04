#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        char a[8][8];
        for(int i=0;i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>a[i][j];
            }
        }
        bool flag = false;
        
        for(int i=0;i<8; i++)
        {
            int count=0;
            for(int j=0; j<8; j++)
            {
                if(a[i][j]=='R')
                {
                    count++;
                }
            }
            if(count==8)
            {
                flag=true;
                break;
            }
        }
        if(flag) cout<<"R"<<'\n';
        else cout<<"B"<<'\n';
    }
    return 0;
}