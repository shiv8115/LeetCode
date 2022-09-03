class Solution {
public:
    bool isOk(vector<int>&weights, int days, int mid){
        int count=1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(sum>mid){
                sum=weights[i];
                count++;
            }
        }
        return count<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low= *max_element(weights.begin(), weights.end());
        int high= accumulate(weights.begin(), weights.end(),0);
        int ans=0;
        if(days==weights.size()) return low;
        while(low<=high)
        {
            int mid= low+(high-low)/2;
            if(isOk(weights,days,mid)){
                ans=mid;
                high=mid-1;
            }
            else low= mid+1;
        }
        return ans;
    }
};