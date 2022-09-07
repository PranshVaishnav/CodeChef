#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int maxi = *max_element(arr.begin(), arr.end());
        maxi=max(maxi,n+1);
        int size_bits=(int)log2(maxi)+1;
        vector<int>bits(size_bits,0);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<size_bits;j++)
                if (arr[i]&(1 << j))
                {
                    bits[j]++;
                }
        }
        reverse(bits.begin(),bits.end());
        int l=bits.size();
        for(int i=0;i<l-1;i++)
        {
           if(bits[i]==bits[i+1])
           {
            cnt++;
           }
        }
        if(bits[0]==bits[1] && bits[0]==0)
        cnt++;

        cout<<cnt<<endl;
    } 
}