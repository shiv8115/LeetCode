// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.


int strstr(string s, string x)
{
    int p = x.size();
    	int t = s.size();
    	int nothing = -1;
    
    	for (int i = 0; i <= (t - p); i++)
    	{
    		int done = 0; 
    		// dones is used to make sure pattern has finished matching
    		// all the characters and when done==patter.size(); return the 
    		// i asap and kill the next process using exit(0)
    		
    		bool matches = true; //assuming character match of both the strings
    		for (int j = 0; j < p; j++)
    		{
    			if (x[j] != s[j + i]) // if characters don't match (especially first character).
    			{
    				matches = false;
    				break;
    				// we break this loop when the first character doesn't match and
    				//move to the next character of the text, then match the pattern[0] with text[current character]
    			}
    			done++;
    		}
    		if (matches && done == p)
    		{
    			return i;
    			exit(0);
    		}
    	}
    
    	return nothing;
}