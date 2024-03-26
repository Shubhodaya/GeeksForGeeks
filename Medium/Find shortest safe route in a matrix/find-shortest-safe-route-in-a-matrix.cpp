//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int findShortestPath(vector<vector<int>> &mat)
    {
        int n=mat.size(), m=mat[0].size();
      vector<vector<int>>mat1(n,vector<int>(m,1));
      
    //   for(int i=0;i<n;i++){
    //       for(int j=0;j<m;j++){
              
    //           if(mat[i][j]==0){
    //               mat1[i][j]=0;
    //               if(i+1<n)mat1[i+1][j]=0;
    //               if(i-1>=0)mat1[i-1][j]=0;
    //               if(j+1<m)mat1[i][j+1]=0;
    //               if(j-1>=0)mat1[i][j-1]=0;
    //           }
              
    //       }
          int ans=1e9;
          vector<vector<int>>vis(n,vector<int>(m,0));
          
          function<void(int,int,int)>f=[&](int i,int j,int sum){
            
            if(i>=n || j>=m ||i<0 ||j<0 || mat[i][j]==0 ||vis[i][j]==1 || (i+1<n && mat[i+1][j]==0) 
            || (i-1>=0 && mat[i-1][j]==0) || (j+1<m && mat[i][j+1]==0) || (j-1>=0 && mat[i][j-1]==0))return;
            
            // if(vis[i][j]==1)return;
            vis[i][j]=1;
            // if(mat[i][j]==0)return;
            
            sum ++;
            if(j==m-1)ans=min(ans,sum);
            
            f(i+1,j,sum);
            f(i-1,j,sum);
            f(i,j+1,sum);
            f(i,j-1,sum);
            
            vis[i][j]=0;
            
              return;
          }; 
          for(int i=0;i<n;i++)f(i,0,0);
          
          if(ans==1e9)return -1;
          
          return ans;
      }
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R, C;
        cin >> R >> C;
        vector<vector<int>> mat(R, vector<int>(C));
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> mat[i][j];
            }
        }

        Solution ob;
        int ans = ob.findShortestPath(mat);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends