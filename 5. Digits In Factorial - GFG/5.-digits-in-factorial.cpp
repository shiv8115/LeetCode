// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int digitsInFactorial(int n)
    {
        // code here
         // code here
     if (n < 0) 
        return 0; 
  
    // base case 
    if (n <= 1) 
        return 1; 
  
    // Use Kamenetsky formula to calculate 
    // the number of digits 
    double x = ((n * log10(n / M_E) +  
                 log10(2 * M_PI * n) / 
                 2.0)); 
  
    return floor(x) + 1; 
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends