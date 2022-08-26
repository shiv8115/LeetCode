class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<int> arr = map_of_digits(n);
     
        int num=1;
        for(int i=0;i<30;i++)
        {
            if(arr == map_of_digits(num) )
                return true;
            
            num=num<<1;
        }
        return false;
        
    }
    vector<int> map_of_digits(int n)
    {
        vector<int> arr(10,0);
        
        while(n)
        {
            int digit = n%10;
            arr[digit]++;
            n=n/10;
        }
        return arr;
    }
};