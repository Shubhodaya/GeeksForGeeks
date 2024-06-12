//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    
    
    int f(int n,vector<int>&dp){
        
        int m=1e9+7;
        if(dp[n]!=-1)return (dp[n]);
        if(n<=2)return dp[n]= 1;
        
        return dp[n]=((f(n-2,dp)%m)+(f(n-3,dp)%m))%m;
    }
    int padovanSequence(int n)
    {
       //code here
       int m=1e9+7;
    //   vector<int>dp(n+1,-1);
    //   return (f(n,dp));
    if(n==0 || n==1 || n==2)
      return 1;
      
       vector<int>dp(n+1,0);
       dp[0]=1;
       dp[1]=1;
       dp[2]=1;
       
       for(int i=3;i<=n;i++)
       {
           dp[i]=(dp[i-2]%m+dp[i-3]%m)%m;
       }
       
       return dp[n];
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
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends