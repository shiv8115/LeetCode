class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        int n=nums.size();
        if(n==0) return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int front=j+1,end=n-1,target2= target-nums[i]-nums[j];
                while(front<end){
                    int sum=nums[front]+nums[end];
                    if(sum<target2) front++;
                    else if(sum>target2) end--;
                    else{
                        vector<int>quadruplet(4,0);
                        quadruplet[0]=nums[i];
                        quadruplet[1]=nums[j];
                        quadruplet[2]=nums[front];
                        quadruplet[3]=nums[end];
                        res.push_back(quadruplet);
                        while(front< end && nums[front]== quadruplet[2]) ++front;
                        while(front<end && nums[end]==quadruplet[3]) --end;
                    }
                }
                while(j+1 < n && nums[j]==nums[j+1]) ++j;
                
            }
            while(i+1 < n && nums[i]==nums[i+1]) ++i;
        }
        return res;
        
    }
};