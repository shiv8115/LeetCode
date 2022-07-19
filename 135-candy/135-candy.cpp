class Solution {
public:
    int candy(vector<int>& ratings) {
//         int len = ratings.size();
//         int left[len];
//         int right[len];
//         int total = 0;
//         for(int i = 0;i < len; i++){
//             left[i] = 1;
//             right[i] = 1;
//         }
        
//         for(int i = 1;i < len; i++){
//             if (ratings[i] > ratings[i-1])
//                 left[i] = left[i-1]+1;
//             if (ratings[len-1-i] > ratings[len-i])
//                 right[len-1-i] = right[len-i]+1;
//         }
//         for(int i = 0;i < len; i++){
//             total += max(left[i],right[i]);
//         }
        
//         return total;
        int n= ratings.size();
        vector<int>left(n,1),right(n,1);
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]) left[i]= left[i-1]+1;
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]) right[i]= right[i+1]+1;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+= max(left[i], right[i]);
        }
        return ans;
    }
};