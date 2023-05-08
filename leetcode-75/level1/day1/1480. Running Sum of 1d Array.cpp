class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int sum = 0;
        for (int num : nums) {
            sum += num;
            result.push_back(sum);
        }
        return result;
    }
};
