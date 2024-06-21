//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        string s1="",s2="",s3="",s4="";
        
        int i=0;
        
        while(1){
            if(str[i]=='/')break;
            s1+=str[i];
            i++;
        }
        i+=1;
        
            while(1){
            if(str[i]==',')break;
            s2+=str[i];
            i++;
        }
        
        i+=2;
            while(1){
            if(str[i]=='/')break;
            s3+=str[i];
            i++;
        }
        
        i++;
        
        while(i<str.size()){
            s4+=str[i];
            i++;
        }
        
        double d1=(stoi(s1)*1.0)/stoi(s2);
        double d2=(stoi(s3)*1.0)/stoi(s4);
        
        
        if(d1>d2){
            return s1+"/"+s2;
        }else if(d1==d2){
            
            return "equal";
        }
        else 
        {
            return s3+"/"+s4;
        }
        
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends