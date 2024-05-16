//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
    
    

public:
int cnt=0;
  
     int f( int i,vector<vector<int>>&adj, vector<int>&vis){
         
         vis[i]=1;
         int sum =1;
         for(auto it: adj[i]){
             if(!vis[it])sum += f(it,adj,vis);
         }
         
         if(i!=1 && (sum%2==0))cnt++;
         
         return sum;
     }
     
     
	int minimumEdgeRemove(int n, vector<vector<int>>edges){
	    // Code
	    vector<vector<int>>adj(n+1);
	    vector<int>vis(n+1,0);
	    for(auto it: edges){
	        int u=it[0],v=it[1];
	        adj[u].push_back(v);adj[v].push_back(u);
	    }
	    int p=f(1,adj,vis);
	    return cnt;
	    
	    
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>edges;
		for(int i = 0; i < n-1; i++){
			int x, y;
			cin >> x >> y;
			edges.push_back({x,y});
		}
		Solution obj;
		int ans = obj.minimumEdgeRemove(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}

// } Driver Code Ends