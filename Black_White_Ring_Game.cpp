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
        cin >> n;
        int cnt = 0;
        vector<int> arr(n);
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int one = 0;
        int zero = 0;
        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            sum += arr[i];
            if (arr[i] != arr[i - 1])
            {
                cnt++;
            }
        }


       

        sum += arr[0];
        one = sum;
        zero = n - one;

        for (int i = 0; i < n; i++)
        {
            if (one > 0)
            {
                ans.push_back(1);
                one--;
            }
            if (zero > 0)
            {
                ans.push_back(0);
                zero--;
            }
        }

        int new_cnt = 0;

        for (int i = 1; i < n; i++)
        {
            if (ans[i] != ans[i - 1])
            {
                new_cnt++;
            }
        }
        if(ans[0]==ans[n-1])
        new_cnt++;
        
        
        int z=abs(new_cnt-cnt);
        z=z/2;
        if(z&1)
        {
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
        
    }
}