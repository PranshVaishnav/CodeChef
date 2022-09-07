#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>s;
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                mini=min(arr[i],mini);
            }
        }
        cout<<mini<<endl;

    }
}