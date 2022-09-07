#include<bits/stdc++.h>
using namespace std;


#define int long long



void fillQueen(vector<vector<int>>&board)
{
    
}

void printQueen(vector<vector<int>>ans)
{
    for(auto i:ans)
    {
        for(auto j:i)
        cout<<j<< " ";

        cout<<endl;
    }

}

signed main()
{
   int n=8;
   vector<vector<int>> board(n,vector<int>(n,0));
   
   fillQueen(board);
   printQueen(board);
}