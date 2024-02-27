//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        
        map<char,int>mp;
        
        for(auto it:s)mp[it]++;
        
        priority_queue<int>p;
        
        for(auto it:mp)p.push(it.second);
        
        for(int i=0;i<k;i++){
            
            int t=p.top();
            
            p.pop();
            p.push(t-1);
        }
        
        int ans=0;
    while (!p.empty()) {
        ans += p.top()*p.top();
        p.pop();
    }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends