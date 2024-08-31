//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    int M=1e9+7;
    int f(int i, string &str,vector<int>&dp){
        
        if(i<=0)return 1;
        
        if(dp[i]!=-1)return dp[i]%M;
        int cnt=0;
        
        if( str[i]>='1')cnt=(cnt%M+f(i-1,str,dp)%M)%M;
        
        if(i-1>=0 && str[i-1]=='1' ||(i-1>=0 && str[i-1]=='2' && str[i]<='6'))cnt=(cnt%M+f(i-2,str,dp)%M)%M;
        
        return dp[i]=cnt%M;
        
    }
	public:
		int CountWays(string str){
		    // Code here
		    vector<int>dp(str.size()+1,-1);
		    return f(str.size()-1,str,dp);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends