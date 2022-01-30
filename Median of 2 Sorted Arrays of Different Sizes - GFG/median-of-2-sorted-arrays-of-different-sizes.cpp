// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        int l1= array1.size(), l2= array2.size();
        vector<int>v(l1+l2);
        int i=0,j=0,k=0;
        while(i<l1 && j < l2){
            if(array1[i]< array2[j]){
                v[k]=array1[i];
                i++;
            }else{
                v[k]=array2[j];
                j++;
            }
            k++;
        }
        while(i<l1){
            v[k]=array1[i];
            i++;
            k++;
        }
        while( j< l2){
            v[k]=array2[j];
            j++;
            k++;
        }
        double med=0.0;
        int mid = v.size()/2;
        if(v.size()%2==1) med= v[mid];
        else med= (v[mid]+v[mid-1])/2.0;
     return med;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends