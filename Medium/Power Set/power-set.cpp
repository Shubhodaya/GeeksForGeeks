//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
    private:
    
    void f(int i,string temp,string s,vector<string> &ans){
        
        if(i>=s.size()){
            if(temp!="")ans.push_back(temp);
            return;
        }
        
        f(i+1,temp+s[i],s,ans);
        f(i+1,temp,s,ans);
        
        
        
    }
    
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>ans;
		    
		    string temp="";
		    f(0,temp,s,ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends