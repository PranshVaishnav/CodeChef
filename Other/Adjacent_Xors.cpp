#include <bits/stdc++.h>
using namespace std;

#define int long long

unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m;
        cin>>m;
        string s="";cin>>s;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=s[i]-'0';
        }
        if(sum==0)
        {
            cout<<n;
        }
        for(int i=0;i<m-1;i++)
        {
            s+=s;
        }
        
        
    }
}