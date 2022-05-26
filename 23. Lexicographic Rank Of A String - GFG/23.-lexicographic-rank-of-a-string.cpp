// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
      const int mod = 1e9+7;
       const int CHAR = 256;
    //Function to find lexicographic rank of a string.
    int findRank(string s) 
    {
        //Your code here
        int arr[CHAR];
       fill(arr,arr+CHAR,0);
       
       long fact[27] = {0};
       fact[0] = 1;
       for(int i=1;i<=26;i++){
           fact[i] = (fact[i-1]*i)%mod;
       }
       
       for(int i=0;i<s.size();i++){
           arr[s[i]]++;
           if(arr[s[i]] > 1) return 0 ;
       }
       
       for(int i=1;i<CHAR;i++){
           arr[i] = (arr[i] + arr[i-1]);
       }
       
       int ans = 1;
       for(int i=0;i<s.size()-1;i++){
           ans = (ans%mod + (arr[s[i]-1]*fact[s.size()-i-1])%mod)%mod;
           
           for(int j=s[i];j<CHAR;j++){
               arr[j]--;
           }
       }
       
       return ans%mod; 
    }
};

// { Driver Code Starts.


int main()
{
    string S;
    int t;
    cin>>t;
    while(t--)
    {
     
        cin>>S;
        Solution obj;
        cout<<obj.findRank(S)<<endl;
    }
}
  // } Driver Code Ends