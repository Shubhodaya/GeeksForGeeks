//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int sum=0; //variable to store the sum of cube of digits
        int temp=n; //variable to store the value of n

        //loop to calculate the sum of cube of digits
        while(temp)
        {
            int last_dig=temp%10; //extracting the last digit of temp
            temp/=10; //updating temp to remove the last digit
            sum+=(last_dig*last_dig*last_dig); //adding the cube of last digit to sum
        }

        //checking if the sum is equal to the original number
        //and returning "Yes" if true, "No" if false
        if(sum==n)
            return "Yes";
        else 
            return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends