//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool checkDfs(int V,vector<int> adj[],int node, vector<int> &vis,vector<int> &path){
        
        
        path[node]=1;
        vis[node]=1;
        
        
        for(int i=0;i<adj[node].size();i++){
            
            if(!vis[adj[node][i]]){
                if(checkDfs(V,adj,adj[node][i],vis,path))return true;
            }
            else if(path[adj[node][i]])return true;
            
        }
        
        
        path[node]=0;
        return false;
        
        
    }
    bool isCyclic(int V, vector<int> adj[]) {
        
        vector<int> path(V,0);
        vector<int> vis(V,0);
        // code here
        
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                if(checkDfs(V,adj,i,vis,path))return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends