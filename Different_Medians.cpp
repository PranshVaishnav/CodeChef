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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        vector<int>ans;
        int i=0;
        int j=n-1;
        while(i<=j)
        {
            ans.push_back(arr[j]);
            ans.push_back(arr[i]);
            i++;
            j--;
        }

        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}