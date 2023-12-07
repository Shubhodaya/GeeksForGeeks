//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
long countSubarrays(int arr[], int n, int L, int R)
    {
        // Complete the function
  
        int i=0,j,m=0;
        long count=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]>R)
            {
                m=0;
                i=j+1;
            }
            else if(arr[j]>=L && arr[j]<=R)
            {
                m=j-i+1;
                count+=m;
            }
            else
            {
                count+=m;
            }
        }
        return count;
        
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends