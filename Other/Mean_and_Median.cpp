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
    int x;
    int y;
    cin>>x>>y;
    //x->mean
    //y->median

    int sum=3*x;
    int mid_number=y;

    //A should be small than or equal to mid
    //C should be larger than or equal to mid
    //A+C;
    //A+B+C=sum

    int rest_sum=sum-mid_number;

    cout<<rest_sum-y<<" "<<y<<" "<<y<<endl;

   }
}