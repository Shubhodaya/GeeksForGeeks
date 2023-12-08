//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int smithNum(int n) {
   int originalSum = 0;
    int m = n;

    // Calculate the sum of digits of the original number
    while (m) {
        originalSum += m % 10;
        m = m / 10;
    }

    int sum = 0;
    int k=n;

    for (int i = 2; i < k; i++) {
        while (n % i == 0) {
            int factorSum = 0;
            int t2 = i;

            // Calculate the sum of digits of the prime factor
            while (t2) {
                factorSum += t2 % 10;
                t2 /= 10;
            }

            sum += factorSum;
            n /= i;
        }
    }

    // Check if the sum of digits in prime factorization is equal to the sum of digits in the original number
    return (originalSum == sum);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends