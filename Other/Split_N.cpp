#include <bits/stdc++.h>
using namespace std;

#define int long long

unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
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
        if (floor(log2(n)) == ceil(log2(n)))
        {
            cout << 0 << endl;
            continue;
        }

        cout<<countSetBits(n)-1<<endl;

    }
}