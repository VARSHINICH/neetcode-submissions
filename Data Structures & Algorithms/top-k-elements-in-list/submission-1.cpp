class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto it:mpp){
            bucket[it.second].push_back(it.first);
        }
        vector<int> ans;
        for(int i=nums.size();i>0 && ans.size()<k;i--){
            for(int it : bucket[i]){
                ans.push_back(it);
                if(ans.size()==k){
                    break;
                }
            }
        }
       return ans; 
    }
};
