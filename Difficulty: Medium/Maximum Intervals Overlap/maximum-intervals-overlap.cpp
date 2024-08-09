//{ Driver Code Starts
// Program to find maximum guest at any time in a party
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> findMaxGuests(int Entry[], int Exit[], int N)
	{
	   // Your code goes here
	   int c=0;
	   int ans=0;
	   
	   int l=0,r=0;
	   sort(Entry,Entry+N);
	   sort(Exit,Exit+N);
	   int t=Entry[N-1];
	   
	   while(l<N && r<N){
	       
	       if(Entry[l]<=Exit[r]){
	           c++;
	           
	           if(ans<c){
	               ans=c;
	               t=Entry[l];
	           }
	           l++;
	       }else{
	           c--;
	           r++;
	       }
	       
	   }
	   
	   return {ans,t};
	}

};

//{ Driver Code Starts.

 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int entry[n],exit1[n];
        for(i=0;i<n;i++)
        cin>>entry[i];
        for(i=0;i<n;i++)
        cin>>exit1[i];
        Solution obj;

	    vector<int> p = obj.findMaxGuests(entry, exit1, n);
	    cout<<p[0]<<' '<<p[1];
	    cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends