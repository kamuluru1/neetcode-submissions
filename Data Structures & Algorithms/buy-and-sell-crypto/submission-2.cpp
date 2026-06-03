class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty() || prices.size() < 2) return 0;

        int l = 0;
        int max = 0;

        for (int r = 0; r < prices.size(); r++) {

            int price = prices[r] - prices[l];

            if (prices[r] < prices[l]) {
                l = r;
            }

            if (price > max) max = price;
        }

        return max;
    }
};
