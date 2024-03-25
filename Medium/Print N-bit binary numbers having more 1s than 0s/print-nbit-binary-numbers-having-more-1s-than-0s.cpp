//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
vector<string>ans;
void function(int n,int zero,int one,bool valid,string& str)
{
    if(n==0)
    {
        if(valid)
        {
            ans.push_back(str);
        }
        // cout<<str<<endl;
        return ;
    }
    str+='1';
    function(n-1,zero,one+1,valid and zero<=one+1,str);
    str.pop_back();
    str+='0';
    function(n-1,zero+1,one,valid and zero+1<=one,str);
    str.pop_back();
    
}
	vector<string> NBitBinary(int n)
	{
string str="";
    function(n,0,0,true,str);
    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends