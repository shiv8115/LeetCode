class Solution {
public:
    string removeDigit(string n, char d) {
        string s=n;
        unordered_map<char,int>mp;
        for(int i=0;i<n.length();i++){
            if(n[i]==d && n[i + 1] > d){
                return n.erase(i,1);
                break;
            }
        }
        int id;
        for(int i=0;i<s.length();i++){
            if(s[i]==d) {
                id=i;
                break;
            }
        }
        n.erase(id,1);
        int idx;
        for(int i=0;i<s.length();i++){
            if(s[i]==d) idx=i;
        }

        cout<<idx;
        s.erase(idx,1);
        if(n>=s) return n;
        else return s;
        return "N";
    }
};