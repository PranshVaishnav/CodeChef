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
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]&1) odd++;
            else even++;
        }

        if(odd==0 || even==0)
        {
            cout<<0<<endl;
            continue;
        }
        
        cout<<even<<endl;


    }
}