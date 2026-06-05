class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof =0;
        int i=0;
        int j = i+1;
        while(j<prices.size()){
            if(prices[i]<prices[j]){
                prof = max(prof, prices[j]-prices[i]);
            }
            else{
                i=j;
            }
            j++;
        }
        return prof;
    }
};
