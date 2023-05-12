#define Max(a, b) ((a) > (b)) ? (a) : (b)
#define DEFAULT_MIN 9999999999
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0, min = DEFAULT_MIN, max = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (min > prices[i]) {
                result = Max(result, max - min);
                min = prices[i];
                if(max > 0) {
                    max = min;
                }
            }
            else if(min != DEFAULT_MIN && max < prices[i]) {
                max = prices[i];
            }
        }

        result = Max(result, max - min);
        return result;
    }
};
