class Solution {
public:
    int loot(int idx, vector<int>& nums, vector<int>& dp){ // idx = 0 to n-1
        if(idx >= nums.size()) return 0;
        if(dp[idx] != -1) return dp[idx];
        int pick = nums[idx] + loot(idx+2, nums, dp);
        int skip = loot(idx+1, nums, dp);
        dp[idx] = max(pick, skip);
        return dp[idx];
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return loot(0, nums, dp);
    }
};