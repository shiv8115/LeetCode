// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int normal_subarray(int arr[], int n){
        int maxending=arr[0],res=arr[0];
        for(int i=1;i<n;i++){
            maxending= max(maxending+arr[i],arr[i]);
            res=max(maxending,res);
        }
        return res;
    }
    int circularSubarraySum(int arr[], int n){
        
        // your code here
        int normal_sum= normal_subarray(arr,n);
        if(normal_sum<0) return normal_sum;
        int arr_sum=0;
        for(int i=0;i<n;i++){
            arr_sum+=arr[i];
            arr[i]= -arr[i];
        }
        int circular_sum= arr_sum+ normal_subarray(arr,n);
        return max(normal_sum,circular_sum);
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends