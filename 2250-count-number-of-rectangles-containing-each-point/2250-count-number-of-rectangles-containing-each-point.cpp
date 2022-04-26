class Solution {
public:
    int binarysearch(vector<int>&arr, int x){
        int l=0, r=arr.size()-1;
        int res=arr.size();
        while(l<=r){
            int mid= l+(r-l)/2;
            if(arr[mid]>=x){
                res=mid;
                r=mid-1;
            }else l=mid+1;
        }
        return res;
    }
    vector<int> countRectangles(vector<vector<int>>& rect, vector<vector<int>>& points) {
        
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<rect.size();i++){
            mp[rect[i][1]].push_back(rect[i][0]);
        }
        for(int i=0;i<=100;i++)
            sort(mp[i].begin(),mp[i].end());
        vector<int>ans;
        for(vector<int>p:points){
            int x=p[0],y=p[1], cnt=0;
            for(int j=y;j<=100;j++){
                if(mp.find(j)!=mp.end()) cnt+= mp[j].size()- binarysearch(mp[j],x);
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};