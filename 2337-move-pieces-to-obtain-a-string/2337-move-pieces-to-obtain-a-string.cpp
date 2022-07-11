class Solution {
public:
    bool canChange(string st, string tar) {
         if(st.length()!=tar.length()) return false;
        int si=0,ti=0;
        while(si<st.length() || ti<tar.length()){
            while(si<st.length() && st[si]=='_') si++;
            while(ti<tar.length() && tar[ti]=='_') ti++;
            if(si==st.length() && ti==tar.length()) return true;
            if(si==st.length() || ti==tar.length() || st[si]!= tar[ti]) return false;
            if(si<st.length() && ti<tar.length()){
                if( tar[ti]=='L' && ti>si) return false;
                if( tar[ti]=='R' && ti<si) return false;
            }
            si++;
            ti++;
        }
        return true;
    }
};