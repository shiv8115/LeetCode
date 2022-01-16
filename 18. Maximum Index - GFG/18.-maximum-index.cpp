// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        // int leftmin[N],rightmax[N];
        // leftmin[0]=A[0];
        // for(int i=1;i<N;i++){
        //     leftmin[i]=min(leftmin[i-1],A[i]);
        // }
        // rightmax[N-1]=A[N-1];
        // for(int i=N-2;i>=0;i++){
        //     rightmax[i]=max(rightmax[i+1],A[i]);
        // }
        // int res=0;
        // int x=0,y=0;
        // while(x<N && y<N){
        //     if(rightmax[y]>=leftmin[x]){
        //         res=max(res,y-x);
        //         y++;
        //     }else x++;
        // }
        // return res;
        int left[N],right[N];
        left[0]=A[0];
        for(int i=1;i<N;i++)
            left[i]=min(left[i-1],A[i]);
        right[N-1]=A[N-1];
        for(int i= N-2;i>=0;i--)
            right[i]=max(right[i+1],A[i]);
        int x=0,y=0,ans=0;
        while(x<N && y<N){
            if(right[y]>=left[x]){
                ans=max(ans,y-x);
                y++;
            }else x++;
        }
        return ans;
    }
};

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends