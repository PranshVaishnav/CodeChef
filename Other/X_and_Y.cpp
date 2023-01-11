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


//Segment tree
int N;
vector<int> v, Tree;

void buildTree(int tidx, int lo, int hi){

	if(lo==hi){
		Tree[tidx] = v[hi];
		return;
	}

	int mid = (lo+hi)/2;

	buildTree(2*tidx+1, lo, mid);
	buildTree(2*tidx+2, mid+1, hi);

	Tree[tidx] = Tree[2*tidx+1] & Tree[2*tidx+2];

}

void updateTree(int tidx, int lo, int hi, int idx, int val){

	if(lo==hi){
		Tree[tidx] = val;
		return;
	}

	int mid = (lo+hi)/2;

	if(idx<=mid)
		updateTree(2*tidx+1, lo, mid, idx, val);
	else
		updateTree(2*tidx+2, mid+1, hi, idx, val);

	Tree[tidx] = Tree[2*tidx+1] & Tree[2*tidx+2];

}

int query(int tidx, int lo, int hi, int L, int R){

	// The Range which we are currently in : [lo, hi]
	// The Range of which we have to compute the answer : [L, R]

	// Outside Range
	if( R<lo || L>hi )
		return 0;

	// In Range
	if( L<=lo && hi<=R )
		return Tree[tidx];

	// Partial Overlap
	int mid = (lo+hi)/2;
	int leftans = query(2*tidx+1, lo, mid, L, R);
	int rightans = query(2*tidx+2, mid+1, hi, L, R);

	return leftans & rightans;

}


void rogenx() {
//Write your code here
      cin>>N;
      v.resize(N,0);
    //   for(int i=0;i<N;i++)
    //   v[i]=i+1;

      Tree.resize(2*N);
      buildTree(0,0,N-1);

       vector<int> Btree [N];
      int desc;
      cin>>desc;

      while(desc--)
      {
        int ui;
        int vi;
        cin>>ui>>vi;
        Btree[ui].push_back(vi);
      }

      int q;
      cin>>q;
      while(q--)
      {
          int qtype;
          cin>>qtype;
          if(qtype==1)
          {
             int node;
             cin>>node;
             if(Btree[node].size()==0)
             {
                updateTree(0,0,N-1,node-1,1);
             }
             else{
                int value=query(0, 0, N-1,Btree[node][0], Btree[node][Btree[node].size()-1]);
                updateTree(0,0,N-1,node-1,value);
             }
          }
          else
          {
             
          }
          
      }

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