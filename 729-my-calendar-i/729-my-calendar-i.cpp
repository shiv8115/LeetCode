class MyCalendar {
public:
    
    vector<pair<int,int>>event;
    MyCalendar() {   
    }
    bool book(int start, int end) {
        for(auto x: event){
            if(x.second>start and x.first<end){
                return false;
            }
        }
        event.push_back({start,end});
        return true;
    }
};
/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */