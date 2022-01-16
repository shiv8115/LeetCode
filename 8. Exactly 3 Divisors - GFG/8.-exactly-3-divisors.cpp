// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool isPrime(int N){
    if(N==1) return false;
    if(N==2 || N==3) return true;
    if(N%2==0 || N%3==0) return false;
    for(int i=5; i*i<=N; i=i+6){
        if(N%i==0 || N%(i+2)==0){
            return false;
        }
    }
    return true;
    }
    int exactly3Divisors(int N)
    {
        //Your code here
         if(N<4) return 0;
    if(N>=4 && N<=8) return 1;
    int x=2;
    for(int i = 5; i<=sqrt(N); i=i+6){
        if(isPrime(i)){
            ++x;
        }
        if(isPrime(i+2) && (i+2)<=sqrt(N)){
            ++x;
        }
    }
    return x;
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
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends