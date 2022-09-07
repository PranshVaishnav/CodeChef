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
    int k;
    cin>>n>>k;
    //N balls
    //K boxes
     if(n<k)
     {
        cout<<"NO"<<endl;
        continue;
     }
     int min_balls=(k*(k+1))/2;
     if(n<min_balls)
     {
        cout<<"NO"<<endl;
        continue;
     }
     else{
        cout<<"YES"<<endl;
     }


   }
}