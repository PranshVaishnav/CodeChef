#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve()
{
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++)
   cin>>arr[i];

   int x=ceil(n/2.0);
   unordered_map<int,int>mp;
   int flag=0;
   for(int i=0;i<n;i++)
   {
       mp[arr[i]]++;
       if(mp[arr[i]]>x)
       {
        flag=1;
        break;
       }
   }

   if(flag)
   cout<<"No"<<endl;
   else{
    cout<<"Yes"<<endl;
   }
    
}
signed main() {
  
    int test=1;
   cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
