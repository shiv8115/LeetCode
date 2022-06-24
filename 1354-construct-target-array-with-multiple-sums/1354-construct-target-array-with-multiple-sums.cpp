class Solution {
public:
    bool isPossible(vector<int>& a) {
        int n = a.size();
        
        priority_queue<long long> pq;
        long long sum = 0;
        for(int& i:a){
            pq.push(i);
            sum += i;
        }
        
        while(pq.top() != 1){
            long long mx = pq.top();
            pq.pop();
            sum -= mx;
            
            if(sum==1)
                return true;
            if(sum>=mx || sum==0)
                return false;
            long long others = sum;
            long long check = (mx-others)%others;
            if(check == 0)
                return false;
            
            pq.push(check);
            sum=others+check;
        }
        
        return true;
    }
};