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
        cin >> n;
        int k;
        cin >> k;
        string s;
        cin >> s;

        int cnt_1 = 0;
        int cnt_0 = 0;

        for (int i = 0; i <= n-k; i++)
        {
           if(s[i]=='1')
           cnt_1++;
        }
        

        int a = abs(n - cnt_1) + abs(k - cnt_0);
        for (int i = 0; i < n; i++)
        {
            if (i <= a)
                s[i] = '0';
            else
                s[i] = '1';
        }
        cout << s << endl;
    }
}