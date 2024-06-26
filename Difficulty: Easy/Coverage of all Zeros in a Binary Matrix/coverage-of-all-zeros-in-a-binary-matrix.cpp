//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& g) {
        // Code here
        int n=g.size(),m=g[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
         
            for(int j=0;j<m;j++){
                
                if(g[i][j]==0)
                {
                       int c=0;
                    if(i-1>=0 && g[i-1][j]==1)c++;
                    if(i+1<n && g[i+1][j]==1)c++;
                     if(j-1>=0 && g[i][j-1]==1)c++;
                    if(j+1<m && g[i][j+1]==1)c++;
                    ans+=c;
                }
            }
        }
        
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends