//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
    
    
    private:
    
    int f(int i,string s, set<string>st){
        
        if(i==s.size())return 1;
        
        string temp="";
        for(int j=i;j<s.size();j++){
            temp += s[j];
            if(st.find(temp)!=st.end()){
                if(f(j+1,s,st))return 1;
            }
            
            
        }
        
        return 0;
        
        
    }
public:
    int wordBreak(int n, string s, vector<string> &d) {
        //code here
        set<string>st(d.begin(),d.end());
        //   for(auto it:st)cout<<it<<endl;
       return f(0,s,st); 
      
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends