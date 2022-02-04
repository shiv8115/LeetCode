// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove pair of duplicates from given string using Stack.
    string removePair(string str)
    {
        // Your code here
        stack<char>st;
        st.push(str[0]);
        for(int i=1;i<str.size();i++){
          if(st.size()){
              if(st.top()== str[i])
                st.pop();
            else st.push(str[i]);
          }else{
              st.push(str[i]);
          }
        }
        string s="";
        while(st.size()>0){
            char ch= st.top();
            s+=ch;
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
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
        string ans = obj.removePair (s);
        if(ans=="")
            cout<<"Empty String"<<endl;
        else
            cout<<ans<<endl;
    }
    
	return 0;
}  // } Driver Code Ends