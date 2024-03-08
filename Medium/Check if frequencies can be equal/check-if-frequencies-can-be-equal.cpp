//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
 
bool issame(unordered_map<int, int> &mp)
    {
        int count=0;
        for(auto it:mp)
        {
            if(!count) count = it.second;
            else
            {
                if(count != it.second) return false;
            }
        }
        return true;
    }
 
    bool f(auto it, unordered_map<int, int> &mp)
    {
        mp[it]--;
        int count = 0;
        if(!mp[it]) mp.erase(it);
        
        for(auto bt:mp)
        {
            if(!count) count = bt.second;
            else if(count != bt.second) return false;
        }
        return true;
    }
 
bool sameFreq(string s)
{
    // code here 
    unordered_map<int, int> mp;
    for(auto it:s) mp[it]++;
    if(issame(mp)) return true;   //to check for equal frequency
    
    for(auto it:s)
    {
        if(f(it, mp) == false)
        {
            mp[it]++;
        }
        else return true;
    }
    return false;
}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends