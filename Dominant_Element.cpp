#include<bits/stdc++.h>
using namespace std;


#define int long long

signed main()
{
   int t=1;
   cin>>t;
   while(t--)
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
      int maxi=0;
      for(auto i:mp)
      {
          maxi=max(maxi,i.second);
      }
int cnt=0;
      for(auto i:mp)
      {
        if(i.second==maxi)
        {
            cnt++;
        }
      }
      if(cnt==1)
      {
        cout<<"Yes"<<endl;
      }
      else{
        cout<<"No"<<endl;
      }
   }
}