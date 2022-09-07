#include<bits/stdc+.h>
using namespace std;

#define int long long

signed main()
{
  int t=1;
  cin>>t;
  while(t--)
  {
    int i,j;
    cin>>i,j;
    vector<vector<int>>board(9,vector<int>(9,0));
    

    //Mark the King 
    board[i][j]=1;

    if((i==1&&j==1) || (i==8&&j==8) || (i==1&&j==8) || (i==8&&j==1) )
    {
         if(i)
         {
            board[i+2][j+1]=2; 
         }
         else{

         }
    }
    else{

    }



  }
}