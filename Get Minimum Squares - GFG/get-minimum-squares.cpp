// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
	public:
	int MinSquares(int n)
	{
	    // Code here
	   // if(ceil(sqrt(n))== floor(sqrt(n))) return 1;
	   // while(n%4==0) n=n/4;
	   // if(n%8==7) return 4;
	   // for(int i=1;i*i<=n;i++){
	   //     int rem= n-(i*i);
	   //     int base= sqrt(rem);
	   //     if(base*base == rem) return 2;
	   // }
	   // return 3;
	   int dp[n+1];
	   dp[0]=0;
	   dp[1]=1;
	   for(int i=2;i<=n;i++){
	       int minm= INT_MAX;
	       for(int j=1;j*j<=i;j++){
	           int rem= i- (j*j);
	           if(dp[rem]<minm) minm= dp[rem];
	       }
	       dp[i]=minm+1;
	   }
	   return dp[n];
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.MinSquares(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends