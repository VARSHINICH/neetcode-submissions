class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s(nums.begin(),nums.end());
        int maxi=0;
        int curr =0;
        for(int i=0;i<n;i++){
            if(s.find(nums[i]-1)==s.end()){
                curr = nums[i];
                int len =1;
                while(s.find(curr+1)!=s.end()){
                    curr++;
                    len++;
                   
                }
                maxi = max(maxi, len);
            }
        }
        return maxi;
    }
};
