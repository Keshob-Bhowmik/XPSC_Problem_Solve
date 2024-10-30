// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<pair<string,string>> v;
//     vector<pair<string,string>> v1;
//     for(int i=0; i<n; i++)
//     {
//         string a,b;
//         cin>>a>>b;
//         v.push_back({a,b});
//     }
//     for(int i=0; i<v.size()-1; i++)
//     {
//         for(int j=i+1; j<v.size(); j++)
//         {
//             if(v[i].second==v[j].first)
//             {
//                 swap(i,j);
//                 // v[i].second==v[j].second;
//                 // pair<string,string> p;
//                 // p.second = v[i].second;
//                 // v[i].second=v[j].second;
//                 // v[j].second=p.second;
//                 // p.first=v[i].first;
//                 // v[i].first=v[j].first;
//                 // v[j].first=p.first;
//                 // auto it = v.begin()+j;
//                 // v.erase(it);
                
//             }
//         }
        
//         v1.push_back({v[i+1].first,v[i+1].second});
//     }
//     cout<<endl;
//     for(pair<string,string> it:v1)
//     {
//         cout<<it.first<<" "<<it.second<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,string> ans,has;
    for(int i=0; i<n; i++)
    {
        string a,b;
        cin>>a>>b;
        if(has.find(a)!=has.end())
        {
            string s = has[a];
            ans[s]=b;
            has.erase(a);
            has[b]=s;
        }
        else
        {
            ans[a]=b;
            has[b]=a;
        }
    }
    cout<<ans.size()<<'\n';
    for(auto it:ans)
    {
        cout<<it.first<<" "<<it.second<<'\n';
    }
    return 0;
}