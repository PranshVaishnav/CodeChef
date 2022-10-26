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
void func(int i, int r, int b, vector<vector<int>> &arr,int &maxi)
{
    // Base Case
    if (i >= arr[1].size())
        return;

    // pick red
    int new_r = r + arr[0][i];
    int new_b = b + arr[1][i];

    if (min(new_r, b) >= min(new_b, r))
    {
        maxi = max(maxi, min(new_r, b));
        func(i + 1, new_r, b, arr,maxi);
    }
    else
    {
        maxi = max(maxi, min(new_b, r));
        func(i + 1, r, new_b, arr,maxi);
    }
    return;
}
void func2(int i, int r, int b, vector<vector<int>> &arr,int &maxi)
{
    // Base Case
    if (i >= arr[0].size())
        return;

    // pick red
    int new_r = r + arr[0][i];
    int new_b = b + arr[1][i];

    if (min(new_r, b) > min(new_b, r))
    {
        maxi = max(maxi, min(new_r, b));
        func(i + 1, new_r, b, arr,maxi);
    }
    else
    {
        maxi = max(maxi, min(new_b, r));
        func(i + 1, r, new_b, arr,maxi);
    }
    return;
}

void rogenx()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(2, vector<int>(n));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    }

    int maxi=INT_MIN;
    func(0, 0, 0, arr,maxi);
    func2(0, 0, 0, arr,maxi);
    cout << maxi << endl;
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