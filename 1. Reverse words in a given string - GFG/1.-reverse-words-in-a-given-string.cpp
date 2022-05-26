// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    void reverse_string(string &str, int i, int j){
        while(i<=j){
            swap(str[i], str[j]);
            i++;
            j--;
        }
    }
    string reverseWords(string s) 
    { 
        // code here 
        int n= s.length();
        int start=0,i;
        for(i=0;i<s.length();i++){
            if(s[i]=='.'){
                reverse_string(s, start, i-1);
                start=i+1;
            }
        }
       reverse_string(s, start, n-1);
       reverse_string(s, 0, i-1);
       return s;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends