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

int longestCommonSubsequence(string text1, string text2) {
       int n1=text1.size();
        int n2=text2.size();
        vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
        
        for(int i=0;i<=n1;i++)
            dp[i][0]=0;
        for(int j=0;j<=n2;j++)
            dp[0][j]=0;
        
        //Fill the dp table
        for(int i=1;i<=n1;i++)
        {
            for(int j=1;j<=n2;j++)
            {
             
                 if(text1[i-1]==text2[j-1])
                 dp[i][j]=1+dp[i-1][j-1];
                
                 else
                 dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        
            }
        }
        int ans=0;
        for(int i=0;i<=n1;i++)
        {
            for(int j=0;j<=n2;j++)
            {
                 if(i+j==n1)
                 {
                    ans=max(ans,dp[i][j]);
                 }
            }
        }

        return ans;
    
    }


void rogenx() {
//Write your code here
  int n;
  cin>>n;
  string s;
  cin>>s;

  string p=s;
  string q=s;
  reverse(q.begin(),q.end());

  
cout<<longestCommonSubsequence(p,q)<<endl;

}


int32_t main() {
#ifndef ONLINE_JUDGE
freopen("error.txt", "w", stderr);
#endif
fastio();
auto start1 = high_resolution_clock::now();
// cout << fixed << setprecision(10);
int _ = 1, gcode = 1;
cin >> _;
while (_--) {
// cout << "Case #" << gcode++ << ": ";
rogenx();
}
auto stop1 = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
cerr << "Time: " << duration . count() / 1000 << "ms" << nline;
#endif
return 0;
}