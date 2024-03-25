//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        int m= 1e9+7;
        vector<int>ans;
        if(n==0)return {0};
        if (n==1)return {0,1};
        ans.push_back(0);ans.push_back(1);
        
for(int i=2;i<=n;i++){
    ans.push_back((ans[i-2]%m+ans[i-1]%m)%m);
}return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends