#ifdef ONLINE_JUDGE
#pragma GCC optimize('Ofast')
#endif

#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define nline '\n'
#define mm (9*1e18)
#define mp make_pair
#define pb push_back
#define int long long
#define mn ((-9)*1e18)
#define lb lower_bound
#define ub upper_bound
#define MOD 1000000007
using namespace chrono;
#define bs binary_search
#define double long double
#define PI 3.141592653589793238462
#define all(x) (x).begin(), (x).end()
#define set_bits __builtin_popcountll
#define fora(i,a,b)  for(int i=a;i<b;i++)
#define rfora(i,a,b) for(int i=b-1;i>=a;i--)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);

// #ifndef ONLINE_JUDGE
// #include <bits/debug.h>
// #else
// #define debug(x)
// #endif
/*----------------------------------------------------------------------------------------*/

long maxEle(queue<long>&dq)
{
     long maxi=INT_MIN;
     while(!dq.empty())
     {
         maxi=max(maxi,dq.front());
         dq.pop();
     }
     return maxi;
}

long getMaxProfit(vector<int> arr, int k) {
    long n=0;
    vector<long>prefix(n+1);
    
    prefix[0]=arr[0];
    for(long i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    
    for(auto i:prefix)
    cout<<i<<" ";
    
    queue<long>dq;
    long ans=INT_MIN;
    for(long i=0;i<n;i++)
    {
        dq.push(prefix[i]);
        if(dq.size()>k)
        dq.pop();
        
        if(i-k>=0)
        {
           ans=max(ans,maxEle(dq)-prefix[i-k]);
        }
        else{
          ans=max(ans,maxEle(dq));
        }
        
    }
       return ans;
}

void rogenx() {
    vector<int>a={4,3,-2,9,-4,2,7,6};
    cout<<getMaxProfit(a,6);
}


int32_t main() {
#ifndef ONLINE_JUDGE
freopen("error.txt", "w", stderr);
#endif
fastio();
auto start1 = high_resolution_clock::now();
// cout << fixed << setprecision(10);
int _ = 1, gcode = 1;
//cin >> _;
while (_--) {
//cout << "Case #" << gcode++ << ": ";
rogenx();
}
auto stop1 = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
cerr << "Time: " << duration . count() / 1000 << "ms" << nline;
#endif
return 0;
}