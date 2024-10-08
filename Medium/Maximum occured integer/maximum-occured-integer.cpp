//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) {
// multiset<int>sl,sr;
        int mini=1e9,maxi=-1;

 for(int i=0;i<n;i++){maxi=max(maxi,r[i]);}
 vector<int>v(maxi+2,0);
        for(int i=0;i<n;i++){mini=min(mini,l[i]);v[l[i]]++;}
        for(int i=0;i<n;i++){v[r[i]+1]--;}
        
        // for(auto it:sl)cout<<it<<" ";
        
       
        
    
        
        for(int i=mini;i<=maxi+1;i++){
            // cout<<v[i]<<endl;
  v[i]=v[i]+v[i-1];
            
            }
            int ans=mini,c=0;;
            
            for(int i=mini;i<=maxi;i++){
                if(v[i]>c){
                    ans=i;
                    c=v[i];
                }
            }
            
            // cout<<c<<endl;
            return ans;
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;

    // taking testcases
    cin >> t;

    while (t--) {
        int n;

        // taking size of array
        cin >> n;
        int l[n];
        int r[n];

        // adding elements to array L
        for (int i = 0; i < n; i++) {
            cin >> l[i];
        }

        int maxx = 0;

        // adding elements to array R
        for (int i = 0; i < n; i++) {

            cin >> r[i];
            if (r[i] > maxx) {
                maxx = r[i];
            }
        }
        Solution ob;

        // calling maxOccured() function
        cout << ob.maxOccured(n, l, r, maxx) << endl;
    }

    return 0;
}
// } Driver Code Ends