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
    int n;
    cin >> n;

    vector<int> freq(n);
    // map<int, int> mp;
    map<int,set<int>>mp;
    for (int i = 0; i < n; i++)
    {
        cin >> freq[i];
        mp[freq[i]].insert(i);
    }

    vector<int>ans(n,-1);

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(ans[i]==-1)
        {
            cnt++;
            int loop=freq[i];
            while(!mp[freq[i]].empty() and loop)
            {
               int index=*mp[freq[i]].begin();
               mp[freq[i]].erase(*mp[freq[i]].begin()); 
               loop--;
               ans[index]=cnt;
            }
            if(loop!=0)
            {
                cout<<-1<<endl;
                return ;
            }
        }  
    }

    // for (auto i : mp)
    // {
    //     if (i.second != 1)
    //     {
    //         if (i.second % i.first != 0)
    //         {
    //             cout << -1 << endl;
    //             return;
    //         }
    //     }
    //     else
    //     {
    //         if (i.first != 1)
    //         {
    //             cout << -1 << endl;
    //             return;
    //         }
    //     }
    // }

    

   

    for (auto i : ans)
        cout << i << " ";
    cout << endl;
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