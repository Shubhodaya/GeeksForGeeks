//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
 bool isPrime(int n){
        if(n==1) return false;
        for(int i=2; i <= sqrt(n); i++){
            if(n%i==0) return false;            
        }
        return true;
    }
    
    int sum(int arr[], int N){
        int total = 0;
        for(int i=0; i<N; i++)
            total += arr[i];
        return total;
    }
    
    int minNumber(int arr[],int N)
    {
        int total = sum(arr, N);
        for(int i=0; i<99; i++)
            if(isPrime(total + i)) return i;  
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends