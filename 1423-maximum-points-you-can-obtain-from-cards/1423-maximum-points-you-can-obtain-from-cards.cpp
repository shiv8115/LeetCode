class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
         k=arr.size()-k;
         int csum=0,sum=0,res=INT_MIN;
         for(int i=0;i<arr.size();i++) sum+=arr[i];
         for(int i=0;i<k;i++) csum+=arr[i];
         res= max(res, sum- csum);
         for(int i=k;i<arr.size();i++){
            csum+=(arr[i]- arr[i-k]);
            res= max(res,sum-csum);
        }
       return res;
    }
};