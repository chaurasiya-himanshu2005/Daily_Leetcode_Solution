class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
        int n = arr.size(), len = 1;
        vector<int> dp(n, 1);
        for(int i = 1; i<n; i++){
            int mx = 0;
            for(int j = i; j>=0; j--){
                if(arr[j] < arr[i]) dp[i] = max(dp[i], dp[j]+1);
            }
            len = max(len, dp[i]);
        }
        return len;
    }
};