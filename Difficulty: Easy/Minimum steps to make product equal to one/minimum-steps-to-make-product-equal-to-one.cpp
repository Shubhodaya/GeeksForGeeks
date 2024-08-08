//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        
        
        int neg=0,pos=0,z=0;
        int ans=0;
        
        for(int i=0;i<N;i++){
            if(arr[i]==0){z++;ans++;}
            else if(arr[i]>0){pos++;ans+=(arr[i]-1);}
            else {neg++;ans+=(-1-arr[i]);}
            
            
            
        }
        
        if(neg%2){
            
            if(z==0)ans+=2;
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.makeProductOne(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends