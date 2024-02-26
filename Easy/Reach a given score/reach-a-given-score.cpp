//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends

class Solution
{
    
    // private:
    
    // long long int f(long long int ){
        
        
        
    // }
    public:
    // Complete this function
    long long int count(long long int n)
    {
        long store = 0;
        for (long i = 0; i <= n; i += 3) {
            store += (n - i) % 5 == 0 ? (n - i) / 10 + 1 : 0;
        }
        return store;
        
    	
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		Solution obj;
		cout<<obj.count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends