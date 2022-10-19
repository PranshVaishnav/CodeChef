#include <bits/stdc++.h>
using namespace std;

#define int long long


signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
          int maxi=-1;
          int mini=INT_MAX;
         for(auto i:mp)
         {
            if(i.second>1)
            {
                maxi=max(maxi,i.second);
                mini=min(mini,i.second);
            }
         }

         if(maxi==-1)
         {
            cout<<0<<endl;
            continue;
         }

        if(maxi==mini)
        {
            cout<<maxi-1<<endl;
            continue;
        }
            
        
     


    }
}