class Solution {
public:
    int fib(int n) {
        vector<long long> v;
        v.push_back(0);
        v.push_back(1);

        for(int i = 0; i <= n; i++) {
            v.push_back(v[i] + v[i + 1]);
        }

        return v[n];
    }
};
