class Solution {
public:
    int titleToNumber(string str) {
        int n= str.size();
        if(n==1) return (str[0]-'A')+1;
        int ans=0;
        for(int i=0;i<n;i++){
            int idx= (str[i]-'A')+1;
            ans = ans*26+ idx;
        }
        return ans;
    }
};