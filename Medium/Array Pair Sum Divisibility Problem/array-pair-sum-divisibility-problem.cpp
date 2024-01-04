//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        
        map<int,int>st;
        
        // for(auto it : nums)st[it%k]++;
        
        
        for(auto it: nums){
            
            // if(st.find((k-(it%k))%k)!=st.end())
             if(st[(k-(it%k))%k]>0)
            st[(k-(it%k))%k]--;
            else
            st[it%k]++;
            
        }
        
        
        for( auto it : st){
            
            if(it.second!=0)return 0;
        }
        
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends