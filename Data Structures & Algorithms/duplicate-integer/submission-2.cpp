class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        bool ans = false;
        for(int i: nums){
            if(s.find(i)!=s.end()){
                ans = true;
                break;
            }
            s.insert(i);
        }
        return ans;

    }
};