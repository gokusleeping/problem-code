----------------O(n^2)------------
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int minPrice = INT_MAX;
         for(int i = 0; i < prices.size(); i++){
         for(int j=i+1;j<prices.size();j++)
         {
             max_profit=max(max_profit,prices[j]-prices[i]);
         }
        }
return max_profit;
    }
};

------------O(n) O(1)-------------------
class Solution {
    public: int maxProfit(vector<int>& prices) {
        int maxprice=0;
        int minprice=INT_MAX;
        for(int i=0;i<prices.size();++i){
          minprice=min(prices[i],minprice);
            maxprice=max(maxprice,prices[i]-minprice);
        
        }
    return maxprice;
    }
};