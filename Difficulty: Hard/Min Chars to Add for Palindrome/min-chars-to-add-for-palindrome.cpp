//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
 void f(string &s, vector<int>&lps){
     
     int pre=0,suf=1;
     
     
     while(suf<s.size()){
         
         if(s[pre]==s[suf]){
             lps[suf]=pre+1;
             pre++;
             suf++;
         }else{
               
               if(pre==0){
                   lps[suf]=0;
                   suf++;
               }else{
                   pre=lps[pre-1];
               }
         }
         
     }
 }
    int minChar(string str){
        //Write your code here
        int n= str.size();
        string s=str;
        reverse(str.begin(),str.end());
        s+="$";
        s+=str;
        vector<int>lps(s.size(),0);
        f(s,lps);
        return n-lps[s.size()-1];
        
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends