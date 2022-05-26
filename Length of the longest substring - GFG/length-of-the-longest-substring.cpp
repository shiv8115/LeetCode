// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        int n=s.length(), i=-1, j=-1, ans=0;
       // unordered_map<char,int>mp;
        int mp[26]={0};
        while(true){
            // Aquire
            bool f1= false, f2= false;
            while(i<n-1){
                f1=true;
                i++;
                mp[s[i]-'a']++;
                if(mp[s[i]-'a']==2) break;
                else{
                    int len= i-j;
                    if(len>ans) ans=len;
                }
            }
            
            // Release
            while(j<i){
                f2=true;
                j++;
                mp[s[j]-'a']--;
                if(mp[s[j]-'a']==1) break;
            }
            if(f1==false && f2== false) break;
        }
      return ans; 
    // int n=S.length(),i=0,j=0,mx=INT_MIN;
    //     int m[26]={0};
        
    //     while(j<n){
    //         m[S[j]-'a']++;
    //         if(m[S[j]-'a']>1){
    //             while(m[S[j]-'a']>1){
    //                 m[S[i]-'a']--;
    //                 i++;
    //             }
    //         }
    //         mx=max(mx,j-i+1);
    //         j++;
    //     }
    //     return mx;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}  // } Driver Code Ends