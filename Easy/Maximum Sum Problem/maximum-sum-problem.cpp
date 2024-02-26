//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    int f(int n){
        
        
        if(n==0)return 0;
    
        
        return max(n,f(n/2)+f(n/3)+f(n/4));
        
        
    
    }
        int maxSum(int n)
        {
            if(n==0)return 0;
            
            return f(n);
            
            
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends