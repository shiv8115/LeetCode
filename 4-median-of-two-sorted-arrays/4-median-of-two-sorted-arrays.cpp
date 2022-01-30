class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1= nums1.size(), l2=nums2.size();
        vector<int>v(l1+l2);
        int i=0,j=0,k=0;
        while(i< l1 && j < l2){
            if(nums1[i]<nums2[j]){
                v[k]=nums1[i];
                i++;
              //  k++;
            }else{
                v[k]=nums2[j];
                j++;
            //    k++;
            }
            k++;
        }
        while(i<l1){
            v[k]=nums1[i];
            i++;
            k++;
        }
        while(j<l2){
            v[k]=nums2[j];
            j++;
            k++;
        }
        double med= 0.0;
        int mid= v.size()/2;
        if(v.size()%2 == 1){
            med= v[mid];
        }else {
            med= (v[mid]+v[mid-1])/2.0;
        }
        return med;
    }
};