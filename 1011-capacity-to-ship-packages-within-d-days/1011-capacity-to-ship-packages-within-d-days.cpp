class Solution {
public:
    bool is_possible_sum(vector<int>&v, int mid, int days){
        int d=1;
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
            if(sum>mid){
                d++;
                sum=v[i];
            }
        }
        return d <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int ans=0;
        int n=weights.size();
        int maxm=0,sum=0;
        for(auto val : weights){
            sum+=val;
            maxm=max(maxm,val);
        }
        if(days==n) return maxm;
        int low=maxm, high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(is_possible_sum(weights,mid,days) == true){
                ans= mid;
                high=mid-1;
            }else low=mid+1;
        }
        return ans;
        
    }
};