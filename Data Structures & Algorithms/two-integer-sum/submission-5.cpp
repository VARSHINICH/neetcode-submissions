class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int k = target - nums[i];
            if(mpp.find(k)!=mpp.end() && mpp[k]!=i){
                return {i, mpp[k]};
            }
        }
        return {};
    }
};
