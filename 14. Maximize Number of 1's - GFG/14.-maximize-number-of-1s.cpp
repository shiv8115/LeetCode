// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // // code here
        // int i=0,j=0,count0=0,res;
        // for(int J=0;J<n;J++){
        //     if(arr[j]==0) count0++;
        //     if(count0<=m){
        //         res=max(res,j-i+1);
        //     }else{
        //         while(count0>m){
        //             if(arr[i++]==0) count0--;
        //         }
        //     }
        // }
        // return res;
         int i=0,count0=0,j=0,res;
        for(j=0;j<n;j++){
            if(arr[j]==0) count0++;
            if(count0<=m) res=max(res,j-i+1);
            else{
                while(count0>m){
                if(arr[i++]==0) count0--;
            }
            }
        }
        return res;
    }  
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends