class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCount=0;
        int prod =1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                prod*= nums[i];
            }
            if(nums[i]==0){
                zeroCount++;
            }
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(zeroCount>1){
                ans.push_back(0);
            }
            else if(zeroCount==1){
                if(nums[i]==0){
                    ans.push_back(prod);
                }
                else{
                    ans.push_back(0);
                }
            }
            else{
                int a =prod/nums[i];
                ans.push_back(a);
            }

        }
        return ans;
    }
};
