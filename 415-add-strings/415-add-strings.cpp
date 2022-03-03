class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.size(), n2= num2.size();
        string str="";
        int carry=0;
        int i=num1.size()-1, j= num2.size()-1;
        while(i>=0 || j>=0 || carry!=0){
            int s=carry;
            if(i>=0) s+= num1[i]-'0';
            if(j>=0) s+= num2[j]-'0';
            carry= s/10;
            str+= s%10+'0';
            i--;
            j--;
        }
        reverse(begin(str), end(str));
        return str;
    }
};