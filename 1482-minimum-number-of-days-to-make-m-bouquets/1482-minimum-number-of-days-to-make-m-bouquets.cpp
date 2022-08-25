class Solution {
public:
    bool isok(vector<int>& bloomDay,int mid, int m, int k){
         int num=k;
        for(int b:bloomDay)
        {
            if(b<=mid)
            {
                num--;
            }
            else
                num=k;
            if(num==0)
            {
                m--;
                num=k;
            }
        }
    return m<=0;
}
    int minDays(vector<int>& arr, int m, int k) {
       int n=arr.size();
       int high=*max_element(arr.begin(),arr.end());
     
        int low=1;
        int ans=-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(isok(arr,mid,m,k)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};