//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges, int distanceThreshold) {
        unordered_map<int,list<pair<int,int>>>adj;
        for(int i=0;i<m;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int w=edges[i][2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        int ans=1e9;
        int node=-1;
        for(int i=0;i<n;i++){
            vector<int>dis(n,INT_MAX);
            set<pair<int,int>>s;
            dis[i]=0;
            s.insert({0,i});
            while(!s.empty()){
                auto top=*(s.begin());
                int distance=top.first;
                int node=top.second;
                s.erase(s.begin());
                for(auto j:adj[node]){
                    if(distance+j.second<dis[j.first]){
                        auto record=s.find(make_pair(dis[j.first], j.first));;
                        if(record!=s.end()){
                            s.erase(record);
                        }
                        dis[j.first]=distance+j.second;
                        s.insert({dis[j.first],j.first});
                    }
                }
            }
            int cnt=0;
            for(int k=0;k<n;k++){
                if(i==k){
                    continue;
                }
                if(dis[k]<=distanceThreshold){
                    cnt++;
                }
            }
            if(cnt<ans){
                ans=cnt;
                node=i;
            }
            else if(cnt==ans){
                node=max(node,i);
            }
            
        }
        return node;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;
        // n--;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        int dist;
        cin >> dist;
        Solution obj;
        cout << obj.findCity(n, m, adj, dist) << "\n";
    }
}

// } Driver Code Ends