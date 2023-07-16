class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int mp =0;
        int buy =prices[0] ;
        int sell;
        int profit;
        
        for(int i= 0 ;i< prices.size() ; i++){
            buy = min(prices[i] ,buy);
            sell = prices[i];
            profit = sell -buy;
            mp = max(profit ,mp);
        }
        return mp;
    }
};