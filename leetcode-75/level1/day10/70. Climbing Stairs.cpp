class Solution {
public:
    int climbStairs(int n) {
        vector<long long> v;

        v.push_back(0);
        v.push_back(1);
        v.push_back(2);
        
        for(int i = 1; i <= n; i++) {
            v.push_back(v[i] + v[i + 1]);
        }

        return v[n];
    }
};
