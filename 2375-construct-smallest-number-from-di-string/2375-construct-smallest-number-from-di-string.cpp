class Solution {
public:
    void Reverse(string &s, int i, int j){
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
    string smallestNumber(string p) {
        int n = p.size();
            string ans="";
            for(int i = 1; i < n+2; i++){
                ans += i + '0';
            }
         int start=0,i;
        for(i=0;i<n;i++){
            if(p[i]=='I'){
                Reverse(ans,start,i);
                start=i+1;
            }
        }
        Reverse(ans,start,n);
        return ans;
    }
};