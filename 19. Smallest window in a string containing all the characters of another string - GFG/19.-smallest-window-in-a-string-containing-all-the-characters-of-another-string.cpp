// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
       int n = s.length();
       int n2 = p.length();
       if(n2>n)
       {
           return "-1";
       }
       unordered_map<int,int> mps;
       for(int i=0;i<n2;i++)
       {
           mps[p[i]]++;
       }
       unordered_map<int,int> mpf;
       string ans = "";
       string curr;
       int i = -1, j = -1;
       int cmp = 0, acmp = p.size();
       while(true)
       {
           // fill and check
           bool f1 = false;
           bool f2 = false;
           while(cmp<acmp and i<n-1)
           {
               i++;
               mpf[s[i]]++;
               if(mpf[s[i]]<=mps[s[i]])
               {
                   cmp++;
               }
               f1 = true;
           }
           while(j<i and cmp==acmp)
           {
               string st = s.substr(j+1,i-(j+1)+1);
               if(st.length()<ans.length() or ans.length()==0)
               {
                   ans = st;
               }
               j++;
               if(mpf[s[j]]==1)
               {
                   mpf.erase(s[j]);
               }
               else
               {
                   mpf[s[j]]--;
               }
               if(mpf[s[j]]<mps[s[j]])
               {
                  cmp--;   
               }
               f2 = true;
           }
           if(!f1 and !f2)
           {
               break;
           }
       }
       if(ans.length()==0)
       {
           return "-1";
       }
       return ans;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends