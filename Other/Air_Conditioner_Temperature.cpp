#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int flag = 0;
        for (int i = a; i <= b; i++)
        {
            if (i>=c)
            {
                flag = 1;
                cout << "Yes" << endl;
                break;
            }
        }
        if (flag == 0)
            cout << "No" << endl;
    }
}