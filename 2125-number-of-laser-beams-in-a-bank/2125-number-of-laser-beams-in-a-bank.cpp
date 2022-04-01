class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>v;
        for(int i=0;i<bank.size();i++){
            string str= bank[i];
            int cnt= count(str.begin(), str.end(), '1');
            if(cnt > 0) v.push_back(cnt);
        }
        if(v.size()==0) return 0;
        int ans=0;
        for(int i=0;i<v.size()-1;i++){
            ans+= (v[i]*v[i+1]);
        }
        return ans;
    }
};