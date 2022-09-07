#include<bits/stdc++.h>
using namespace std;


#define int long long

signed main()
{
   int t=1;
   cin>>t;
   while(t--)
   {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=a-c;
    int y=b-d;
    if(x<y)
    {
        cout<<"First"<<endl;
    }
    else if(x>y)
    {
  cout<<"Second"<<endl;
    }
    else{
        cout<<"Any"<<endl;
    }
   }
}