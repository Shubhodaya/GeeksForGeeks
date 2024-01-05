//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
int k=1e9+7;
int f(int n){
    if(n==1) return 2;
    if(n==2) return 3;
    int a=2,b=3,c=0;
    for(int i=0;i<n-2;i++){
        c=(a+b)%k;
        a=b;
        b=c;
    }
return c;
}
 
int TotalWays(int n){
        return (1ll*f(n)%k*f(n)%k)%k;
}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends