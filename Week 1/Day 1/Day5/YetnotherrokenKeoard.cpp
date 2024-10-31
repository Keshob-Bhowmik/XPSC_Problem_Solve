// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         string a;
//         cin>>a;
//         ll s=a.size();
//         vector<ll> v(s,0);
//         // int v_i=0;
//         // for(auto value:v)
//         // {
//         //     cout<<value<<" ";
//         // }
//         // cout<<a.size()<<endl;
//         // a.erase(a.begin()+2);
//         ll cb=0,cB=0,lower=0,upper=0;
//         for(ll i=0; i<a.size(); i++)
//         {
//             if(a[i]=='b')
//             {
//                 cb++;
//                 for(ll k=i-1; k>=0; k--)
//                 {
//                     if(islower(a[k]) && a[k]!='b' && v[k]==0)
//                     {
//                         v[k]=1;
//                         lower++;
//                         break;
//                     }
//                 }
//                 // ll k=i-1;
//                 // while(k!=-1)
//                 // {
//                 //     if(a[k]>=97 && a[k]<=122 && a[k]!='b' && v[k]==0)
//                 //     {
//                 //         v[k]++;
//                 //         lower++;
//                 //         // v.push_back(k+1);
//                 //         break;
//                 //     }
//                 //     else
//                 //     {
//                 //         k--;
//                 //     }
//                 // }
                
//             }
//             else if(a[i]=='B')
//             {
//                 cB++;
                
//                 ll k=i-1;
//                 for(ll k=i-1; k>=0; k--)
//                 {
//                     if(isupper(a[k]) && a[k]!='B' && v[k]==0)
//                     {
//                         v[k]=1;
//                         upper++;
//                         break;
//                     }
//                 }
                
//             }
//         }
//         if(s-(lower+upper)==0)
//         {
//             cout<<'\n';
//         }
//         else
//         {
//             for(ll i=0; i<a.size(); i++)
//         {
//             if((a[i]!='b' && a[i]!='B') && v[i]==0)
//             {
//                 cout<<a[i];
//             }
//             // if(a[i]=='b' || a[i]=='B')
//             // {
//             //     continue;
//             // }
//             // else if(v[i]>0)
//             // {
//             //     continue;
//             // }
//             // else
//             // {
//             //     cout<<a[i];
//             // }
//         }
//         cout<<'\n';
//         }
        
//         // for(int i=0; i<v.size(); i++)
//         // {
//         //     cout<<i<<"->"<<v[i]<<endl;
//         // }
        
//         // cout<<endl;
//         // cout<<a.size();
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=6; i++)
//     {
//         if((i%2)!=0)
//         {
//             continue;
//         }
//         if((i%2)==0)
//         {
//             continue;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }