#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=n;
    int count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    if(count==4)
    {
        cout<<k;
    }
    else if(count==3)
    {
        cout<<0<<k;
    }
    else if(count==2)
    {
        cout<<0<<0<<k;
    }
    else if(count==1)
    {
        cout<<0<<0<<0<<k;
    }
    else if(n==0)
    {
        cout<<0<<0<<0<<0;
    }
    return 0;
}