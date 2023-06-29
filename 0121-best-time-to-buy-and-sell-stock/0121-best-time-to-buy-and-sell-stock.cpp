class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit =0;
        int sell;
        int buy =prices[0];
        
        for(int i = 1 ; i< prices.size() ;i++){
            
            buy = min(buy,prices[i]);
            sell = prices[i];
            
            maxprofit = max(maxprofit ,sell -buy);
            
            
        }
           return maxprofit;
    }
};