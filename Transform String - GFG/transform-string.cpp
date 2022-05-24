// { Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int transform (string a, string b)
    {
        //code here.
          if(a.length()!=b.length())return -1;
    string s1,s2;
    s1=a;
    s2=b;
    sort(s1.begin(),s1.end());
     sort(s2.begin(),s2.end());
     for(int i=0;i<s1.length();i++){if(s1[i]!=s2[i])return -1;}
     
     int i=a.length()-1,j=i;int f=0;
     while(i>=0&&j>=0){
      //   cout<<"kde\n";
         if(a[i]==b[j]){
     //  cout<<"1\n";
             i--;j--;
         }
         else {
             ++f;i--;
         }
         
         
         
         
         
     }
     return f;
    }
};


// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}  // } Driver Code Ends