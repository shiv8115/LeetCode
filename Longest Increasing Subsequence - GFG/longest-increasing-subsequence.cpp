// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int arr[])
    {
       // your code here
       int dp[n];
       int osum=0;
       for(int i=0;i<n;i++){
           int max=0;
           for(int j=0;j<i;j++){
               if(arr[i]>arr[j]){
                   if(dp[j]>max) max= dp[j];
               }
           }
           dp[i]= max+1;
           if(dp[i]>osum) osum=dp[i];
       }
       return osum;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends