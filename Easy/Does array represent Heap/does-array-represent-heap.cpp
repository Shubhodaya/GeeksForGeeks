//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    bool isMaxHeap(int v[], int n)
    {
        // Your code goes here
        
        for(int i=0;i<n;i++){
            
            int pi=i+1;
            
            int c1=2*pi;
             int c2=(2*pi)+1;
             
             
             if((c1-1<n) && (v[i]<v[c1-1]))return 0;
            if((c2-1<n) && (v[i]<v[c2-1]))return 0;
            
        }
        
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    }
    return 0;
}

// } Driver Code Ends