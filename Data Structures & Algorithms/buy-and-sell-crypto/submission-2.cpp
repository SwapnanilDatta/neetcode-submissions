class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxprofit=0;
        int profit;
        for(int i=0;i<prices.size();i++)
        {
            if(minprice>prices[i])
            {
                minprice=prices[i];
                
            }
            profit=prices[i]-minprice;
            maxprofit=max(profit,maxprofit);
        }
        return maxprofit;
        
    }
};
