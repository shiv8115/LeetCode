// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int kadane(vector<int> v,int n){
    int ma = INT_MIN;
    int untill = 0;
    for(int i=0;i<n;i++){
        untill += v[i];
        if(untill>ma) ma= untill;
        if(untill<0) untill = 0;
    }
    return ma;
   }
    int maximumSumRectangle(int m, int n, vector<vector<int>> M) {
        // code here
        int maxi = INT_MIN;
        for(int i=0;i<m;i++){
            vector<int> res(n,0);
            for(int j=i;j<m;j++){
                for(int col=0;col<n;col++){
                    res[col] += M[j][col];
                }
                maxi = max(maxi,kadane(res,n));
            }
        }
        return maxi;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}  // } Driver Code Ends