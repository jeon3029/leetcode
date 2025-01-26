
class RecentCounter {
public:
    deque<int> d ;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        d.push_back(t);
        while(d.size()){
            int front = d.front();
            if(t-front<=3000) break;
            else d.pop_front();
        }
        return d.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */