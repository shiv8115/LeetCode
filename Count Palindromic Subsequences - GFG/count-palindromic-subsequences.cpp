// { Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    /*You are required to complete below method */
    long long int  countPS(string s)
    {
       //Your code here
       int n = s.size();
        const int mod = 1e9+7;
        
        long long dp[n][n];
        for(int g = 0; g < n; g++){
            for(int i = 0, j = g; j < n; i++, j++){
                if(g == 0)dp[i][j] = 1;
                else if(g == 1)dp[i][j] = s[i] == s[j] ? 3 : 2;
                else{
                    if(s[i] == s[j])
                        dp[i][j] = (dp[i][j-1] % mod + dp[i+1][j] % mod + 1) % mod;
                    else 
                        dp[i][j] = (dp[i][j-1] % mod + dp[i+1][j] % mod - dp[i+1][j-1] + mod) % mod;
                }
            }
        }
        return dp[0][n-1];
    }
     
};

// { Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}  // } Driver Code Ends