class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int sum = 0;
        for (int num : nums) sum += num;
        if (left == sum - nums[0]) return 0;
        for (int i = 1; i < nums.size(); i++) {
            left += nums[i - 1];
            if (left == sum - left - nums[i]) return i;
        }
        return -1;
    }
};
