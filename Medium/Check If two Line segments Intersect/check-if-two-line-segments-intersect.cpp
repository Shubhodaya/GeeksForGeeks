//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string doIntersect(int p1[], int q1[], int p2[], int q2[]) {
        // code here
        double s=(double)(q2[1]-p2[1])/(double)(q2[0]-p2[0]);
        double s1=(double)(q1[1]-p1[1])/(double)(q1[0]-p1[0]);
        
        if((((double)p1[1]-(double)p2[1]-s*(double)(p1[0]-p2[0]))*((double)q1[1]-(double)p2[1]-s*(double)(q1[0]-p2[0]))<=(double)0)&&(((double)p2[1]-(double)p1[1]-s1*(double)(p2[0]-p1[0]))*((double)q2[1]-(double)p1[1]-s1*(double)(q2[0]-p1[0]))<=(double)0))return "true";
        else return "false";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p1[2], q1[2], p2[2], q2[2];
        cin >> p1[0] >> p1[1] >> q1[0] >> q1[1] >> p2[0] >> p2[1] >> q2[0] >> q2[1];
        // if (q2[1] == -2) {
        //     cout << "true" << endl;
        //     return 0;
        // }
        Solution ob;
        // int a = ob.doIntersect(p1, q1, p2, q2);
        // if (a)
        cout << ob.doIntersect(p1, q1, p2, q2) << "\n";
    }
}
// } Driver Code Ends