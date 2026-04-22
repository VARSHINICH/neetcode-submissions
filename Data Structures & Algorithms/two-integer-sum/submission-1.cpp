#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int v = target - nums[i];
            if(mpp.find(v)!=mpp.end() && mpp[v]!=i){
                return {i,mpp[v]};
            }
        }
        return {};
    }
};
