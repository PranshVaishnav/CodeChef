#ifdef ONLINE_JUDGE
#pragma GCC optimize('Ofast')
#endif

#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define nline '\n'
#define mm (9 * 1e18)
#define mp make_pair
#define pb push_back
#define int long long
#define mn ((-9) * 1e18)
#define lb lower_bound
#define ub upper_bound
#define MOD 1000000007
using namespace chrono;
#define bs binary_search
#define double long double
#define PI 3.141592653589793238462
#define all(x) (x).begin(), (x).end()
#define set_bits __builtin_popcountll
#define fora(i, a, b) for (int i = a; i < b; i++)
#define rfora(i, a, b) for (int i = b - 1; i >= a; i--)
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

// #ifndef ONLINE_JUDGE
// #include <bits/debug.h>
// #else
// #define debug(x)
// #endif
/*----------------------------------------------------------------------------------------*/

void rogenx()
{
    // Write your code here
    int n;
    cin >> n;
    int k;
    cin >> k;

    string s;
    cin >> s;

    vector<int> cnt;

    int i = 0;
    while (i < n)
    {
        int c = 0;
        if (s[i] == '1')
        {
            while (s[i] == '1')
            {
                c++;
                i++;
            }
          
            cnt.push_back(c);
        }
        else
        {
            while (s[i] == '0')
            {
                c++;
                i++;
            }
        
            cnt.push_back(c);
        }
    }

    // for(auto i:cnt)
    // cout<<i<<" ";

    int index = 0;
    int maxi = 0;
    for (int i = 0; i < cnt.size(); i++)
    {
        if (cnt[i] >= maxi)
        {
            maxi = cnt[i];
            index = i;
        }
    }
    int ans = 0;
    
    // cout<<"index"<<index<<endl;
    if (s[0] == '1')
    {
        // even index =1 ;
        // odd index = 0;
        if (cnt[index] >= k and !(index & 1))
        {
            cout << 0 << endl;
            return;
        }

        if (cnt[index] >= k and index&1)
        {
            cout << 1 << endl;
            return;
        }

        while (maxi + cnt[index - 1] < k)
        {
            maxi += cnt[index - 1];
            ans++;
            index--;
        }
         if(index&1)
        {
            ans++;
        }
        cout<<ans<<endl;
    }
    else
    {
           
        // even index = 0
        // odd index = 1
     
        if (cnt[index] >= k and !(index&1))
        {
            cout << 1 << endl;
            return;
        }

        if (cnt[index] >= k and index & 1)
        {
            cout << 0 << endl;
            return;
        }

        while (maxi + cnt[index - 1] < k)
        {
            maxi += cnt[index - 1];
            ans++;
            index--;
        }
        if(!(index&1))
        {
          ans++;
        }
        cout<<ans<<endl;
    }


}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    fastio();
    auto start1 = high_resolution_clock::now();
    // cout << fixed << setprecision(10);
    int _ = 1, gcode = 1;
    cin >> _;
    while (_--)
    {
        // cout << "Case #" << gcode++ << ": ";
        rogenx();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration.count() / 1000 << "ms" << nline;
#endif
    return 0;
}