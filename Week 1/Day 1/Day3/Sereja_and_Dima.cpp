#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    deque<int> d(n);
    for(int i=0; i<n; i++)
    {
        cin>>d[i];
    }
    int sereja=0;
    int dima = 0;
    int turn=1;
    // while(!d.empty())
    // {
    //     int first=d.front(), last=d.back();
    //     if((turn%2)!=0)
    //     {
    //         if(first>=last)
    //         {
    //             sereja+=first;
    //             d.pop_front();
    //         }
    //         else
    //         {
    //             sereja+=last;
    //             d.pop_back();
    //         }
    //     }
    //     else
    //     {
    //         if(first>=last)
    //         {
    //             dima+=first;
    //             d.pop_front();
    //         }
    //         else
    //         {
    //             dima+=last;
    //             d.pop_back();
    //         }
    //     }
    //     turn++;
    // }
    int first=0,last=n-1;
    while(last>=first)
    {
        if((turn%2)!=0)
        {
            if(d[first]>d[last])
            {
                sereja+=d[first];
                first++;
            }
            else
            {
                sereja+=d[last];
                last--;
            }
        }
        else
        {
            if(d[first]>d[last])
            {
                dima+=d[first];
                first++;
            }
            else
            {
                dima+=d[last];
                last--;
            }
        }
        turn++;

    }
    cout<<sereja<<" "<<dima<<'\n';
    return 0;
}