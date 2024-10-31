#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        deque<char> d;
        ll lower=0, upper=0;
        for(int i=a.size()-1; i>=0; i--)
        {
            if(a[i]=='b')
            {
                lower++;
                continue;
            }
            else if(a[i]=='B')
            {
                upper++;
                continue;
            }
            else if(lower && islower(a[i]))
            {
                lower--;
                continue;
            }
            else if(upper && isupper(a[i]))
            {
                upper--;
                continue;
            }
            d.push_front(a[i]);
        }
        for(auto &it:d)
        {
            cout<<it;
        }
        cout<<'\n';
    }
    return 0;
}