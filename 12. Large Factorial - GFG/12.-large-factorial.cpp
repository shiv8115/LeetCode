// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution{
public:
   vector<long long> make_factorial(vector<long long>&nums,long long maxval){
       nums[0]=1,nums[1]=1;
       for(int i=2;i<=maxval;i++){
           nums[i]= (i*nums[i-1])%1000000007;
       }
       return nums;
   }
    vector<long long> factorial(vector<long long> a, int n) {
         vector<long long>res(n);
        long long maxm= *max_element(a.begin(),a.end());
        vector<long long>fact(maxm+1);
        make_factorial(fact,maxm);
        for(int i=0;i<n;i++){
            res[i]=fact[a[i]];
        }
        return res;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<long long> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<long long> res = ob.factorial(a, n);
        for (i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends