class Solution {
public:
    bool solve(int i, int sum, vector<int>& nums, vector<vector<int>> &dp){ // i -> 0 to n -1, sum -> sum to 0
        if(i == nums.size()) return (sum==0);
        if(dp[i][sum] != -1) return dp[i][sum];
        bool skip = solve(i+1, sum, nums, dp);
        if(sum - nums[i] < 0) return dp[i][sum] = skip;
        bool pick = solve(i+1, sum-nums[i], nums, dp);
        return dp[i][sum] = skip || pick;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += nums[i];
        }
        if(sum % 2 != 0) return false;

        int target = sum/2;
        vector<vector<int>> dp(n, vector<int>(target+1, -1));
        return solve(0, target, nums, dp);
    }
};