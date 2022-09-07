class Solution {
public:
    string largestOddNumber(string num) {
        int idx=-1;
        string res="";
        for(int i=num.length()-1;i>=0;i--){
            if((num[i]-'0')%2){
                idx=i;
                break;
            }
        }
        if(idx==-1) return res;
        int len= idx+1;
        res= num.substr(0, len);
        return res;
    }
    
};