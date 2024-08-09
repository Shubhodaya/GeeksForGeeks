//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
   int ans = 0;

    void f(int i, int p, int arr[], int N, int K) {
        if (i == N) {
            if (p <= K ) ans++;  // Check if the product is within the limit and exclude the empty subset (p==1)
            return;
        }

        // Exclude the current element
        f(i + 1, p, arr, N, K);

        // Include the current element only if the new product doesn't exceed K
        if (p <= K / arr[i]) { // Avoid integer overflow
            f(i + 1, p * arr[i], arr, N, K);
        }

        return;
    }
  public:
    int numOfSubsets(int arr[], int N, int K) {
        // code here
        
        f(0,1,arr,N,K);
        return ans-1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>K;

        Solution ob;
        cout << ob.numOfSubsets(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends