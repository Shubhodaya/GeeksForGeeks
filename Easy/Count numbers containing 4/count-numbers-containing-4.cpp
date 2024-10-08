//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
 int countNumberswith4(int n) 
    {
        if(n<4) return 0;
        if(n<13) return 1;
        int count = 0;
        for (int i = 1; i <= n; ++i) 
        {
            if (to_string(i).find('4') != string::npos) 
            {
                ++count;
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends