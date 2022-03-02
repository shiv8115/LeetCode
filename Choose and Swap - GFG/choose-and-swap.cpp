// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    string chooseandswap(string a){
        // Code Here
        int n = a.length();
       set<char> s(a.begin(),a.end());
       
       vector<char> ans(n);
       for(int i = 0; i < n; i++) ans[i] = a[i];

       
       for(int i = 0; i < n; i++){
           char ch = a[i];
           auto it1 = s.find(ch);
           if(it1 != s.end()) s.erase(it1);
           
           if(s.empty()) break;
           auto it = s.begin();
           if(*it < ch){
               for(int i1 = i; i1 < n; i1++)
                   if(a[i1] == ch)
                       ans[i1] = *it;
               
               for(int i1 = i; i1 < n; i1++)
                   if(a[i1] == *it)
                       ans[i1] = ch;
               
               break;
           }
       }
       
       string str{};
       for(char ch: ans) str += ch;
       
       return (str);
    }
    
};


// { Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}
  // } Driver Code Ends