class Solution {
public:
    bool isValid(string s, string p, vector<int>& rem, int k){
        for(int i=0;i<k;i++) s[rem[i]]='*';
        int j=0;
        for(int i=0;i<s.size();i++){
            if(i<s.length() && j<p.length()){
                if(s[i]==p[j])j++;
            }else{
                break;
            }
        }
        // while(i<s.length() && j<p.length()){
        //     if(s[i]==p[j]) j++;
        //     i++;
        // }
        return (j==p.length());
    }
    int maximumRemovals(string s, string p, vector<int>& rem) {
        int low=0, high=rem.size(), ans=0;
        while(low<=high){
            int mid= (low+high)/2;
            if(isValid(s,p,rem,mid)){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};