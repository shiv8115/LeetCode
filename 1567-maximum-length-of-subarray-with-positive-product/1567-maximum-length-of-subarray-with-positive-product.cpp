class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int poslen=0, neglen=0, res=0;
        for(auto x:nums){
            if(x==0){
                poslen=0;
                neglen=0;
            }
            else{
                if(x<0) swap(poslen, neglen);
                if(poslen>0 || x>0) ++poslen;
                if(neglen>0 || x<0) ++neglen;
                res= max(poslen, res);
            }
        }
        return res;
    }
};