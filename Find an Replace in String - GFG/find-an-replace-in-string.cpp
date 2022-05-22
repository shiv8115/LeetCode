// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) {
        // code here
        string ans=S;
        int counter=0;
        for(int i=0;i<Q;i++)
        {
            int idx=index[i];
            string src=sources[i];
            string trgt=targets[i];
            string str=S.substr(idx);
            size_t found = str.find(src);
            if (found != string::npos && found==0)
            {
                int new_index=idx+counter;
                ans=ans.substr(0,new_index)+trgt+ans.substr(new_index+src.size());
                counter+=trgt.size()-src.size();
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        
        int Q;
        cin>>Q;
        int index[Q];
        string sources[Q], targets[Q];
        
        for(int i=0; i<Q; i++)
            cin>>index[i];
        for(int i=0; i<Q; i++)
            cin>>sources[i];
        for(int i=0; i<Q; i++)
            cin>>targets[i];

        Solution ob;
        cout<<ob.findAndReplace(S,Q,index,sources,targets)<<endl;
    }
    return 0;
}  // } Driver Code Ends