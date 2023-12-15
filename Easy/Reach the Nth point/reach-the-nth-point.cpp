//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
    private :
    
    int func(int n,vector<int> &dp){
        long long int MOD = 1000000007;
        
        if (dp[n]!=0)return dp[n];
        
        if(n==1)return 1;
        if(n==2)return 2;
        
       dp[n]=(func(n-1,dp)%MOD+func(n-2,dp)%MOD)%MOD;
       return dp[n];
        
    }
	public:
		int nthPoint(int n){
		    
		    vector<int>dp(n+1,0);
		    return func(n,dp);
		    
		    
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends