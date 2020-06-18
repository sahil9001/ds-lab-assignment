class RandomizedSet {
public:
    /** Initialize your data structure here. */
    template<typename S>
    auto select_random(const S &s, size_t n) {
        auto it = std::begin(s);
        // 'advance' the iterator n times
        std::advance(it,n);
        return it;
    }
    
    set<int> ms;
    RandomizedSet() {
        ms.clear();
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        const bool is_in = ms.find(val) != ms.end();
        if(is_in){
            return false;
        }
        else{
            ms.insert(val);
            return true;
        }
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        const bool is_in = ms.find(val) != ms.end();
        if(is_in){
            ms.erase(ms.find(val));
            return true;
        }
        else{
            return false;
        }
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        auto r = rand() % ms.size(); // not _really_ random
        auto n = *select_random(ms, r);
        return n;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */