#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(int i=0; i<n; i++)
        {
            int a;
            string b;
            cin>>a;
            cin>>b;
            for(int j=0; j<b.size(); j++)
            {
                if(b[j]=='U')
                {
                    v[i]--;
                }
                else if(b[j]=='D')
                {
                    v[i]++;
                }
            }
        }
        for(auto value:v)
        {
            if(value>9)
            {
                cout<<value-10<<" ";
            }
            else if(value<0)
            {
                cout<<value+10<<" ";
            }
            else
            {
                cout<<value<<" ";
            }
            
        }
        cout<<'\n';
    }
    return 0;
}