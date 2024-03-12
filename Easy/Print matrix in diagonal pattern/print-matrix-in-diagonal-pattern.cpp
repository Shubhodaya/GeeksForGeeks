//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
      void getNext(int &i, int &j, int n, bool &up)
    {
        if(up)
        {
            if(i-1>=0 && j+1<n)
            {
                i--;
                j++;
            }
            else if(j+1 < n)
            {
                j++;
                up = !up;
            }
            else if(i+1 < n)
            {
                i++;
                up = !up;
            }
        }
        else
        {
            if(i+1<n && j-1>=0)
            {
                i++;
                j--;
            }
            else if(i+1<n)
            {
                i++;
                up = !up;
            }
            else if(j+1<n)
            {
                j++;
                up = !up;
            }
        }
    }
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
          vector<int> ans;
         int n = mat.size();
         int i = 0, j = 0;
         bool up = true;
         
         while(i!=n-1 || j!=n-1)
         {
             ans.push_back(mat[i][j]);
             getNext(i, j, n, up);
         }
         ans.push_back(mat[n-1][n-1]);
         
         
         return ans;
         
         
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends