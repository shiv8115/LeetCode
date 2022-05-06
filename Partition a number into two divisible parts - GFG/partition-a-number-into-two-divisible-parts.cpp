// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string stringPartition(string s, int a, int b){
        // code here 
        int n= s.length();
        string s1,s2;
        for(int i=0;i<s.length()-1;i++){
            s1= s.substr(0,i+1);
            s2= s.substr(i+1,n);
            if(stoi(s1)%a==0 && stoi(s2)%b==0)
              {
                  return s1+" "+s2;
              }
        }
        return "-1";
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {   
        int a,b;
        string S;
        cin >> S >> a >> b;
        Solution ob;
        cout << ob.stringPartition(S,a,b) << endl;
    }
    return 0; 
}   // } Driver Code Ends