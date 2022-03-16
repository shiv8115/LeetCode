// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template 

class Solution{
  public:
    // s : given string
    // return the expected answer
    int fun(string &s) {
        //code here
        long long a=0, ab=0, abc=0;
        for(int i=0;i<s.length();i++){
            char ch= s[i];
            if(ch=='a'){
                a= (2*a+1)%1000000007;
            }else if(ch=='b'){
                ab= (2*ab+a)%1000000007;
            }else if(ch=='c'){
                abc= (2*abc+ab)%1000000007;
            }
        }
        return (abc)%1000000007;
    }
};

// { Driver Code Starts.
 
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.fun(s)<<endl;
    }
	return 0;
}  // } Driver Code Ends