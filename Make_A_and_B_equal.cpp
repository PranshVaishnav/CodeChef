#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
  
    int sum_x=0;
    int sum_y=0;
    for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=0;i<n;i++)
    cin>>b[i];

    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {

            sum_x+=abs(a[i]-b[i]);
        }
        if(b[i]>a[i])
        {
            sum_y+=abs(a[i]-b[i]);
        }
    }

    if(sum_x!=sum_y)
     cout<<-1<<endl;
    else
    cout<<sum_x<<endl;

    
}
signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);



    int test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
