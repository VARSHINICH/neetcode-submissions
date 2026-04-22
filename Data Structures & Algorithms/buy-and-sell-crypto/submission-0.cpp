class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int r = l+1;
        int maxP=0;
        while(r<prices.size()){
            int prof = prices[r]-prices[l];
            if(prices[r]<prices[l]){
                l=r;
            }
            else{
                r++;
            }
            maxP=max(maxP,prof);
        }
        return maxP;
    }
};
