//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int a[], int n, int k)
	{
	    
	    map<int,int>suffix;
	    
	    suffix[0]=-1;
	    int sum=0;
	    int len=0;
	    for(int i=0;i<n;i++){
	        
	         sum= (sum +(a[i]%k)+k)%k;
	         
	       //  cout<<sum<<endl;
	         if(suffix.count(sum)){
	             len=max(len,i-suffix[sum]);
	         }else{
	             suffix[sum]=i;
	             
	         }
	         
	     
	    }
	    
	        return len; 
	    // Complete the function
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends