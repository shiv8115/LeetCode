// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
        // Your code here
        stack<char>st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(st.top() != s[i]) st.push(s[i]);
        }
        string str="";
        while(st.size()>0){
            char ch=st.top();
           // str+=ch;
            str+=ch;
            st.pop();
        }
        reverse(str.begin(), str.end());
       return str;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.removeConsecutiveDuplicates(s)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends