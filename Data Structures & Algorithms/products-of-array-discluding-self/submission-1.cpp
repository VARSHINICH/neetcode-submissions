class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroes =0;
        int prod =1;
        for(int i: nums){
            if(i==0){
                zeroes++;
            }
            else{
                prod*=i;
            }
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(zeroes>=2){
                ans.push_back(0);
            }
            else if(zeroes==1){
                    if(nums[i]==0){
                        ans.push_back(prod);
                    }
                    else{
                        ans.push_back(0);
                    }
                }
            else {
                    ans.push_back(prod/nums[i]);
                }
        }
        return ans;
    }
};
