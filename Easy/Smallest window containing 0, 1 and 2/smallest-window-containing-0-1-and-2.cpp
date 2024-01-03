//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
    
    int z=-1,o=-1,t=-1;
    
    
    // for(int i=0;i<S.size();i++){
        
        // if(s[i]=='0' && z==-1){
        //     z=i;
        // }
        //         if(s[i]=='2' && t==-1){
        //     t=i;
        // }
        //         if(s[i]=='1' && o==-1){
        //     o=i;
        // }
    // }
    // if(z==-1 || t==-1 || o==-1)return -1;
    
    // int f=min(z,min(o,t));
    //  int s=max(z,max(o,t));
    
    // while(s<S.size() && f<s){
        
    // }
    
    
    int mini=1e5;
    for(int i=0;i<S.size();i++){
    
    
            if(S[i]=='0' ){
            z=i;
        }
                if(S[i]=='2'){
            t=i;
        }
                if(S[i]=='1' ){
            o=i;
       
                }
       if(z!=-1 && o!=-1 && t!=-1){
     int f=min(z,min(o,t));
     int s=max(z,max(o,t));
        mini= min(mini, s-f);
        
    }
                
    
    }
    
  if(z==-1 || t==-1 || o==-1)return -1;
  
  
  return mini+1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends