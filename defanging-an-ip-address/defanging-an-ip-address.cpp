class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.size();
        string str="";
        for(int i=0;i<n;i++){
            if(address[i]=='.')
                str+= "[.]";
            else
                str+=address[i];
        }
       return str; 
    }
};