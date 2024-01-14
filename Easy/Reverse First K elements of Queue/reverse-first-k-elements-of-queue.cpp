//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        int k1=k;
        // add code here.
        vector<int>v;
        while(k--){
            v.push_back(q.front());
            q.pop();
        }
        
        for(int i=0;i<k1;i++){
            // cout<<v[i]<<endl;
            
            q.push(v[k1-i-1]);
        }
        
        int n=q.size()-k1;
                while(n--)
        {
            q.push(q.front());
            q.pop();
        }
        return q;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends