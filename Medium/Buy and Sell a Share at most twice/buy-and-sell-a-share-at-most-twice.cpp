//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution

{
    
 
    
    

    
    public:
        //User function Template for C++
    int f(int i,int tr,vector<int>&prices,vector<vector<int>>& dp){
    
    if(tr>3)
        return 0;
    if(i>=prices.size())return 0;
    if(dp[tr][i]!=-1)return dp[tr][i];
        
        if(tr==0 || tr==2){
            return dp[tr][i]= max(f(i+1,tr,prices,dp),f(i+1,tr +1,prices,dp)-prices[i]);
        }else{
            
         return dp[tr][i]=max(f(i+1,tr,prices,dp),f( i+1,tr +1,prices,dp)+prices[i]);
        }
        
    }
        
        int maxProfit(vector<int>&price){
            //Write your code here..
            
            vector<vector<int>>dp(4,vector<int>(price.size()+1,-1));
            
            return f(0,0,price,dp);
        }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        Solution obj;
        cout<<obj.maxProfit(price)<<endl;
    }

}

// } Driver Code Ends