#include <bits/stdc++.h>
using namespace std;

#define int long long


int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}


signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int start=arr[0];
        for(int i=1;i<n;i++)
        {
            start=gcd(start,arr[i]);
        }
        cout<<start*n<<endl;

    }
}