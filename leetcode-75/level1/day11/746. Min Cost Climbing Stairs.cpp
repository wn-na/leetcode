#define MIN(a, b) (a) > (b) ? (b) : (a)

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();
        vector<int> dp(size + 2);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for (int i = 2; i < size; i++) {
            dp[i] = MIN(dp[i - 2] + cost[i], dp[i - 1] + cost[i]);
        }
        
        return MIN(dp[size - 1], dp[size - 2]);
    }
};
