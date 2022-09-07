#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

signed main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    vector<int>rem(k);
    unordered_map<int,int>mp;
    for(int i=0;i<k;i++)
    {
        cin>>rem[i];
        mp[rem[i]]++;
    }

    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(!mp.count(arr[i]))
        {
           ans.push_back(arr[i]);
        }
    }
    for(auto i :ans)
    cout<<i<<" ";
    cout<<endl;
   }
}