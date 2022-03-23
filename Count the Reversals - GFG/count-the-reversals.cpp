// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    // your code here
    int ans=0;
    int n= s.length();
    stack<char>st;
    for(int i=0;i<n;i++){
        char ch= s[i];
        if(ch=='{') st.push(ch);
        else{
            if(st.empty()){
                st.push('{');
                ans++;
            }else st.pop();
        }
    }
    if(st.size()%2==0) return ans+(st.size()/2);
    else return -1;
    
}