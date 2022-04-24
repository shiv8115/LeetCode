class UndergroundSystem {
public:
    map<int,pair<string,int>> mp;
    map<string,vector<int>> mp2;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        mp[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        if(mp.find(id)!=mp.end())
        {
        int time=t-mp[id].second;
        string back=mp[id].first;
        back.push_back('@');
        back.push_back('#');
        back.push_back('!');
        for(auto &i:stationName)
        {
            back.push_back(i);
        }
       
        mp2[back].push_back(time);
        mp.erase(id);
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        string back=startStation;
        back.push_back('@');
        back.push_back('#');
        back.push_back('!');
        for(auto &i:endStation)
        {
            back.push_back(i);
        }
       
        double ans=0;
        int cnt=0;
        for(auto &i:mp2[back])
        {
            ans+=i;
            cnt++;
        }
        
        return ans/cnt;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */