class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();     
        int lmax=0, rmax=0, ans=0;
        int i=0, j=n-1;
        while(i!=j){
            if(height[i]>=lmax) lmax=height[i];
            if(height[j]>=rmax) rmax= height[j];
            
            if(height[i]>height[j])  ans+= min(lmax, rmax)- height[j], j--;
            else if(height[j]>= height[i]) ans+= min(lmax, rmax)- height[i], i++;
        }
        return ans;
    }
};