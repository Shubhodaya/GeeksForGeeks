//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string s) {

        // code here
        // string st="",temp="";
        long long st=9,temp=9;
        long long n=s.size();
        int f=1;
        for(long long i=0;i<n;i++){
            
            if(f==1 && (s[i]=='0' ||s[i]=='1' ||s[i]=='2' ||s[i]=='3' ||s[i]=='4' ||s[i]=='5' ||s[i]=='6' ||s[i]=='7' ||s[i]=='8' ))
            {
                if(temp==9){
                    temp=s[i]-'0';
                }else {
                    temp*=10;
                    temp += s[i]-'0';
                }
            
            
            }
            else if(s[i]!=' '){
                temp=9;
                f=0;
            }
            else if(i==n-1 || s[i]==' '){
                if(st==9){
                    st=temp;
                    temp=9;
                }
                else{
                    if(temp!=9 && st!=9 && (temp)>(st)){
                        st=temp;
                    }
                }
                temp=9;
                f=1;
            }
            
            
        }
        
        if(st==9)return -1;
        
        return (st);
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends