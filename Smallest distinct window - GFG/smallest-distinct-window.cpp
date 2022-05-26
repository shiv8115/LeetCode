// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
        unordered_map<char,int>mp;
        unordered_set<char>s;
        for(int i=0;i<str.length();i++) s.insert(str[i]);
        int n= s.size();
        mp[str[0]]++;
        int cnt=1;
        int i=0, j=1, minm=INT_MAX;
        while(i<=j && j< str.length()){
           if(cnt<n){
               if(mp[str[j]]==0) cnt++;
               mp[str[j]]++;
               j++;
               
           }else if(cnt==n){
               minm= min(minm, j-i);
               if(mp[str[i]]==1) cnt--;
               mp[str[i]]--;
               i++;
           }
            
        }
        while(cnt==n){
               minm= min(minm, j-i);
               if(mp[str[i]]==1) cnt--;
               mp[str[i]]--;
               i++;
           }
           return minm;
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends