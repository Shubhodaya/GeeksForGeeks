//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string longestSubstring(string s, int n) {
        // code here
        
        
        if (n==1)return "-1";
        int i=0;string ans="-1";
        
        int mx=0;
        
        for(int j=0;j<n;){
            
            string temp= s.substr(i,j-i+1);
            
            if(s.find(temp,j+1)!=string::npos){
                
                if(temp.size()>mx){
                    mx=temp.size();
                    ans=temp;
                }
                j++;
                
            }else i++;
            
            
            if(i>=n-1)break;
            
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        Solution ob;
        cout << ob.longestSubstring(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends