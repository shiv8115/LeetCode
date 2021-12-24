class Solution {
public:
    int minimumDeletions(string s) {
        int n= s.size(),res=INT_MAX;
        int arr[n];
        arr[n-1]= s[n-1]=='a'?1:0;
        for(int i=n-2;i>=0;i--){
            arr[i]= arr[i+1]+(s[i]=='a'?1:0);
        }
        int cntb=0;
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                 res= min(res,cntb+arr[i]);
                cntb++;
            }
        }
        res=min(res,cntb);
        return res==INT_MAX?0:res;
    
    }
};