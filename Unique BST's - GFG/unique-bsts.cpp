// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the total number of possible unique BST. 
    #define MOD 1000000007
    int numTrees(int n) 
    {
        // Your code here
        long long int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            long long int cnt=0;
            for(int j=0;j<i;j++){
                long long int left=j;
               long long  int right= i-j-1;
                cnt+= (dp[left]* dp[right])%MOD;
            }
            dp[i]= cnt%MOD;
        }
        return dp[n]%MOD;
    }
};

// { Driver Code Starts.
#define mod (int)(1e9+7)
int main(){
    
    //taking total testcases
    int t;
    cin>>t;
    while(t--){
        
        //taking total number of elements
        int n;
        cin>>n;
        Solution ob;
        //calling function numTrees()
        cout<<ob.numTrees(n)<<"\n";
    }
}	  // } Driver Code Ends