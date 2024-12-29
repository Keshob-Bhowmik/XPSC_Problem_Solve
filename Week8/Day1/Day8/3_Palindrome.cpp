#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    char s[n+1];
    int c=1;
    int p=0;
    for(int i=0; i<n; i++)
    {
        if(c==1 && p<2)
        {
            s[i]='a';
            p++;
            if(p==2)
            {
                c=0;
            }
        }
        else if(c==0 && p<=2)
        {
            s[i]='b';
            p--;
            if(p==0)
            {
                c=1;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<s[i];
    }
    return 0;
}