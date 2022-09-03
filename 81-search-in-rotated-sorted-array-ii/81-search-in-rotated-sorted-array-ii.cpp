class Solution {
public:
    bool search(vector<int>& arr, int key) {
         int n= arr.size();
        int l=0, h=n-1;
        while(l<=h){
            while(l<h && arr[l]==arr[l+1]) l++;
            while(l<h && arr[h]==arr[h-1]) h--;
            int mid= l+(h-l)/2;
            if(arr[mid]==key) return true;
            else if(arr[l]<=arr[mid]){
                //left sorted
                if(key>=arr[l] && key<arr[mid]) h=mid-1;
                else l=mid+1;
            }
            else{
                //right sorted
                if(key>arr[mid] && key<=arr[h]) l=mid+1;
                else h=mid-1;
            }
        }
        return false;
    }
};