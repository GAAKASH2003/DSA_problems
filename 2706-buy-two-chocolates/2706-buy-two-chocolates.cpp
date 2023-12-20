class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int t=money;
        t=t-prices[0]-prices[1];
        if(t<0) return money;
        return t;
    }
};