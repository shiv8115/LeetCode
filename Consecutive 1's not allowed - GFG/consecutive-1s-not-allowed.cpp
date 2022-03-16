// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    ll ocones=1;
	    ll oczeros=1;
	    for(int i=2;i<=n;i++){
	        ll nczeros= (oczeros+ocones)%1000000007;
	        ll ncones= oczeros%1000000007;
	        oczeros= nczeros;
	        ocones= ncones;
	    }
	    return (ocones+oczeros)%1000000007;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends