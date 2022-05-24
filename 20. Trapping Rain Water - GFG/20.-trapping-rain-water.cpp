// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int low=0, high=n-1;
        long long int lmost=arr[0], rmost= arr[n-1], water=0;
        while(low<high){
            if(arr[low]<=arr[high]){
                if(arr[low]>lmost) lmost= arr[low];
                else water+=(lmost-arr[low]);
                low++;
            }else{
                if(arr[high]>rmost) rmost= arr[high];
                else water+=(rmost-arr[high]);
                high--;
            }
        }
        return water;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends