class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int>odd;
        priority_queue<int>even;
        string str= to_string(num);
        int n= str.length();
        for(int i=0;i<n;i++){
            int digit= str[i]-'0';
            if(digit%2==0)  even.push(digit);
            else odd.push(digit);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans= ans*10;
            int digit= str[i]-'0';
            if(digit%2==0){
                ans+=even.top();
                even.pop();
            }else{
                ans+=odd.top();
                odd.pop();
            }
            
        }
        return ans;
    }
};