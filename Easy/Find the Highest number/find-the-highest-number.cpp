//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int n= a.size();
        int l=1,h=n-1,mid,ans;
        if(n>1){
            if(a[0]>a[1])return a[0];
        }
        while(l<=h){
            mid=(l+h)/2;
            
            if(a[mid-1]<a[mid]){
                l=mid+1;
                ans=a[mid];
            }else{
                h= mid-1;
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends