//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
public:
    vector<string> findPath(vector<vector<int>>& m, int n) {
        vector<string> ans;
        vector<vector<int>> vis(n + 1, vector<int>(n + 1, 0));

        function<void(int, int, string, vector<vector<int>>&)> f = [&](int i, int j, string temp, vector<vector<int>>& vis) {
            if (i < 0 || i >= n || j < 0 || j >= n) return;
            if (m[i][j] == 0 || vis[i][j] == 1) return;

            if (i == 0 && j == 0) {
                reverse(temp.begin(),temp.end());
                ans.push_back(temp);
                return;
            }

            vis[i][j] = 1;

            temp.push_back('D');
            f(i - 1, j, temp, vis);
            temp.pop_back();

            temp.push_back('R');
            f(i, j - 1, temp, vis);
            temp.pop_back();

            temp.push_back('U');
            f(i + 1, j, temp, vis);
            temp.pop_back();

            temp.push_back('L');
            f(i, j + 1, temp, vis);
            temp.pop_back();

            vis[i][j] = 0;
            return;
        };

        string temp = "";
        f(n - 1, n - 1, temp, vis);

        sort(ans.begin(), ans.end());
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends