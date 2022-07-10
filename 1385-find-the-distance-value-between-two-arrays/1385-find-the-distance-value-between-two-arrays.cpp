class Solution {
public:
    int isPresent(vector<int>& nums,int x, int y){
        bool present=false;
        int low=0, high=nums.size()-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(nums[mid]>= x && nums[mid]<=y){
                present=true;
                break;
            }else if(nums[mid]<x) low=mid+1;
            else high=mid-1;
            
        }
        if(present==false) return 1;
        else return 0;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n1= arr1.size();
        int n2= arr2.size();
        sort(begin(arr2), end(arr2));
        int res=0;
        for(int i=0;i<n1;i++){
            if(isPresent(arr2,arr1[i]-d, arr1[i]+d))  res++;
        }
        return res;
    }
};