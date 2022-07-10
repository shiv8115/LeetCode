class Solution {
public:
    vector<int> findAnagrams(string txt, string pat) {
        vector<int>res;
        int n=txt.length();
	   int k= pat.length();
	   unordered_map<char,int>mp;
	   for(int i=0;i<k;i++) mp[pat[i]]++;
	   int count=mp.size();
	   int i=0,j=0;
	  // int res=0;
	   while(j<n){
	       if(mp.find(txt[j])!=mp.end()){
	           mp[txt[j]]--;
	           if(mp[txt[j]]==0) count--;
	       }
	       if(j-i+1<k) j++;
	       else if(j-i+1==k){
	           if(count==0) res.push_back(i);
	           if(mp.find(txt[i])!=mp.end()){
	               mp[txt[i]]++;
	               if(mp[txt[i]]==1) count++;
	           }
	           i++;
	           j++;
	       }
	   }
	   return res;
    }
};