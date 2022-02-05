// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int dp[n];
	    int osum=0;
	    for(int i=0;i<n;i++){
	        int max=NULL;
	        for(int j=0;j<i;j++){
	            if(arr[i]>arr[j]){
	                if(max==NULL) max= dp[j];
	                else if(dp[j]>max) max= dp[j];
	            }
	        }
	        if(max==NULL) dp[i]=arr[i];
	        else dp[i]= max+arr[i];
	        if(dp[i]>osum) osum=dp[i];
	    }
	    return osum;
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends