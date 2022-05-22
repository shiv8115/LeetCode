// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> arr){
        //code here
        vector< pair<int, int>>  temp ; 
    
    int index = -1 ; 
    
      for( int i =  0 ; i< N ; i++)
       {
             temp.push_back({arr[i], i});
       }
       
   
    vector<int> ans(N , -1);
     sort(temp.begin() ,temp.end());
 
    for(int i = 0 ; i<N;i++)
     {
           int first = temp[i].first;
           int second = temp[i].second;
             if( index  > second)
               {
                    ans[second] = index;
                    
               }
                index = max( index ,second);
     }
      return ans ; 
    }
};

// { Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}  // } Driver Code Ends