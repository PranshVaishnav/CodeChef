#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve()
{
    int a;
    int b;
    cin>>a>>b;
    int x=a/b;
    if(a%b!=0)
    {
        cout<<"No"<<endl;
    }
    else{
     if(x&1)
         cout<<"No"<<endl;
          else 
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
