class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int l =0;
        int r= l+1;
        int maxi=0;
        while(r<n){
            int profit = prices[r]-prices[l];
            if(prices[l]>prices[r]){
                l = r;
            }
            else{
                r++;
            }
            maxi = max(maxi,profit);
        }
        return maxi;
    }
};
