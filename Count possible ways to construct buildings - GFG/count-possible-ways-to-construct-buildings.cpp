// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int TotalWays(int n)
	{
	    // Code here
	    long long ocb=1, ocs=1;
	    for(int i=2;i<=n;i++){
	        long long ncb= ocs%1000000007;
	        long ncs= (ocs+ocb)%1000000007;
	        ocb= ncb;
	        ocs= ncs;
	    }
	    long long ans= (ocs+ocb)%1000000007;
	    return (ans*ans)%1000000007;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends