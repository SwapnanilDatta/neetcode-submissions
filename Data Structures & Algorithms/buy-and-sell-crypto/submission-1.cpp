class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxprofit=0;
        int profit;
        for (int price:prices)
        {
            if(price<minprice)
            {
               
                minprice=price;
            }
            profit=price-minprice;
            if(profit>maxprofit)
            {
                maxprofit=profit;
            }
        }
        return maxprofit;
        
    }
};
