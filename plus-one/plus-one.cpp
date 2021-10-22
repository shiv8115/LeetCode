class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int n=arr.size();
        if(arr[n-1]!=9){
            arr[n-1]+=1;
            return arr;
        }
        while(n!=0){
            if(arr[n-1]==9){
                arr[n-1]=0;
                n--;
            }else{
                arr[n-1]+=1;
                return arr;
            }
        }
        arr.insert(arr.begin(),1);
        return arr;
        
    }
};