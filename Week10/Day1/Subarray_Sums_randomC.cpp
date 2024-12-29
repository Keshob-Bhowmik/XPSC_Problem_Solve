#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int l=0, r=0;
    int sum=0;
    int count=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum==k)
        {
            count++;
        }
        else if(sum>k)
        {
            while(sum>=k)
            {
                if(sum<=k)
                {
                    break;
                }
                sum-=v[l];
                l++;
            }
            if(sum==k)
            {
                count++;
            }
        }
        r++;
    }
    cout<<count<<'\n';
    return 0;
}