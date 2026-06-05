class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int curr = nums[0];
        int n = nums.size();
        int maxi= 0;
        int i=0;
        while(i<n){
            int curr = nums[i];
            int cnt =0;
            while(s.find(curr)!=s.end()){
                curr++;
                cnt++;
            }
            maxi = max(cnt,maxi);
            i++;
        }
        return maxi;
    }
};
