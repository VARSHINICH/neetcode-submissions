class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> maxHeap;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            
        }
        
        for(auto it : mpp){
            maxHeap.push({it.second,it.first});
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return ans;

    }
};
